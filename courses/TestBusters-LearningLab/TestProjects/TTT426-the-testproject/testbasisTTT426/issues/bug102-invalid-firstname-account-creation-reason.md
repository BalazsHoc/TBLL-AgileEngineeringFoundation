# Debugging Report – Invalid First Name Validation

## Title

Registration – Root Cause Analysis for Invalid First Name Validation

---

## Related Bug Report

bug102-invalid-firstname-account-creation.md

---

## Syllabus Reference

ISTQB Foundation Level – Section 1.1.2 Testing and Debugging

---

## Debugging Objective

Identify why invalid first name values containing inappropriate special characters are accepted during customer registration.

---

## Failure Summary

During testing, the registration process accepted invalid first name values.

Examples:

```
@@@
&?Test
```

The defect was reproduced through:

- Web Registration Form
- REST API (Swagger)

Both registration paths successfully created customer accounts using invalid first name values.

---

# Investigation

## Step 1 – Frontend Validation

### File

```
register.component.ts
```

### Current Implementation

```ts
first_name: ['', [Validators.required]],
```

### Finding

The frontend validates only that the field is not empty.

No validation exists for:

- valid name format
- invalid special characters
- names consisting only of symbols
- names beginning with invalid characters

Examples accepted by the frontend:

```
@@@
&?Test
!!!!
123
```

### Conclusion

The Angular registration form applies only:

```
Validators.required
```

Therefore every non-empty value is considered valid.

---

## Step 2 – Backend Request Validation

### File

```
StoreCustomer.php
```

### Current Implementation

```php
'first_name' => [
    'required',
    'string',
    'max:40',
    new SubscriptSuperscriptRule()
],
```

### Finding

The backend validates:

- required
- string
- maximum length
- subscript/superscript characters

However, no validation exists for a valid human name format.

Examples accepted by the backend:

```
@@@
&?Test
```

Swagger testing confirmed that the API accepts invalid values and returns:

```
HTTP 201 Created
```

### Conclusion

The backend request validation is incomplete.

---

## Step 3 – Service Layer Investigation

### File

```
UserService.php
```

### Finding

The service layer performs no additional validation.

After request validation succeeds, the user data is prepared and stored.

Example:

```php
$data = $this->extractAddressFields($data);

$user = User::create($data);
```

### Conclusion

The service layer assumes that request validation has already guaranteed valid input.

---

## Step 4 – User Model Investigation

### File

```
User.php
```

### Finding

The model contains:

```php
protected $fillable = [
    'first_name',
    ...
];
```

The model allows `first_name` to be mass assigned.

No model-level validation exists.

### Conclusion

If invalid data reaches the model, it is stored without additional verification.

---

# Root Cause Analysis

The defect exists because validation is incomplete across the registration flow.

### Frontend

Only checks:

```ts
Validators.required
```

No format validation exists.

---

### Backend Request Validation

Only validates:

- required
- string
- maximum length
- subscript/superscript

No validation exists for acceptable first name characters.

---

# Testing vs Debugging

## Testing Activity

Testing demonstrated that:

- invalid first names are accepted by the Web UI
- invalid first names are accepted through Swagger
- customer accounts are created successfully

---

## Debugging Activity

Debugging identified the implementation responsible for the defect.

The investigation showed that:

- Angular only checks `Validators.required`
- Laravel request validation does not validate name format
- UserService performs no additional validation
- User model stores accepted values without verification

---

# Risk Assessment

Current risks include:

- Poor customer data quality
- Invalid names stored in the database
- Incorrect names displayed in emails and reports
- Invalid data available to downstream systems
- API consumers can bypass frontend validation

---

# Proposed Solution

The Product Owner should define the business rule for valid customer names.

Recommended validation:

Allow:

- Unicode letters
- spaces
- hyphen (-)
- apostrophe (')

Reject:

- names consisting only of symbols
- names beginning with symbols
- unsupported special characters

The same validation rule should be implemented in both:

- Frontend
- Backend

to ensure consistent behaviour.

---

# Acceptance Criteria for the Fix

- [ ] `@@@` is rejected.
- [ ] `&?Test` is rejected.
- [ ] `Anna` is accepted.
- [ ] `Jean-Luc` is accepted.
- [ ] `O'Connor` is accepted.
- [ ] Validation works in the Web UI.
- [ ] Validation works through the REST API.
- [ ] A meaningful validation message is displayed.

---

# Debugging Status

Root cause identified.

Ready for implementation.