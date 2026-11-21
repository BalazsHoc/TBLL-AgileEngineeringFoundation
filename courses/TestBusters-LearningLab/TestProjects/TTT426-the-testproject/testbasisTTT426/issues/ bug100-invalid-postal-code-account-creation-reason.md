# Apply Testing and Debugging on Toolshop Defect

## Title
Registration accepts invalid postal code values during account creation

## Syllabus Reference
ISTQB Foundation Level – 1.1.2 Testing and Debugging

## Learning Objective
Apply the ISTQB concept of separating **testing** from **debugging** in a realistic Toolshop defect.  
This artifact documents the observed failure, test evidence, debugging findings, likely root cause, and a possible solution.

---

## 1. Defect Summary

| Field | Value |
|---|---|
| Bug ID | BUG-001 |
| Feature / Flow | Registration / Account Creation |
| Defect | Invalid postal code values are accepted |
| Status | Open |
| Severity | Medium |
| Priority | Medium |
| Environment | Practice Software Testing / Toolshop |
| Tested via | UI and Swagger API |
| Date tested | TODO: add date |
| Browser / OS | TODO: add browser and OS |

---

## 2. Context

During the registration flow, the user has to enter address data, including:

- country
- postal code
- house number
- street
- city
- state

Sprint 5 documentation describes a **postcode + house number → address autofill** feature for the registration and checkout-address forms.  
The lookup is triggered when country, postal code, and house number all have a value.

No explicit validation rule for allowed postal code format was found in the available documentation.

---

## 3. Assumption

Since the field represents a postal code and is used for address lookup and customer address data, the application is expected to reject clearly invalid values, especially values containing only special characters or invalid symbols such as `@`.

This assumption should be confirmed with the Product Owner or clarified in the acceptance criteria.

---

### Debugging Activities

The debugging investigation focused on finding the reason in the implementation:

- Checked the Angular registration form validation.
- Compared frontend validation with observed UI behavior.
- Checked API behavior using Swagger.
- Identified that frontend validation only checks whether `postal_code` is required.
- Observed that the backend accepts invalid non-empty postal code values.

---

## 4. Debugging Findings

### Frontend Finding

In `register.component.ts`, the `postal_code` form control only uses `Validators.required`:

```ts
postal_code: new FormControl('', {
  validators: [Validators.required],
  updateOn: 'change'
}),
```

No `Validators.pattern(...)` or custom postal code validator is applied.

Therefore, the frontend blocks only empty postal codes but accepts values such as `12@10`, `ABCDE`, or `@@@@@`.

### Template Finding

The registration template contains handling for a postal code `pattern` validation error:

```html
@if (f['postal_code'].errors?.['pattern']) {
  <div>
    {{ t('fields.postal_code.errors.format') }}
  </div>
}
```

However, the corresponding `pattern` validator is not configured in the TypeScript form control.

This suggests that a format validation message exists in the UI template, but the validation rule is missing from the form configuration.

### TypeScript Model Observation

The `Address` model defines `postal_code` as `boolean`:

```ts
export interface Address {
  street?: string;
  city?: boolean;
  state?: boolean;
  country?: boolean;
  postal_code?: boolean;
}
```

However, the registration form sends postal code as a string.

This type mismatch is probably not the direct runtime cause of the defect, but it reduces type safety and may make validation-related mistakes harder to detect during development.

### Backend / API Finding

The Swagger test showed that the backend accepts invalid non-empty postal codes and returns `201 Created`.

This suggests that the backend also does not enforce postal code format validation during user registration.

---

## 5. Related Defect

Postal code validation is incomplete in the registration/account creation flow.

The system validates that the postal code field is not empty, but it does not validate the postal code format or reject invalid characters.

---

## 6. Possible Human Error / Root Cause

A developer may have implemented only required-field validation and omitted the postal code format validation.

Another possible cause is that the requirement did not clearly define the expected postal code format or validation rules.  
This may have led to inconsistent implementation: the template contains a pattern error message, but the actual pattern validator is missing.

---

## 7. Possible Solution

### Product / Requirement Clarification

Clarify the expected postal code validation rules with the Product Owner.

Examples:

- Should validation be country-specific?
- Should `NL` accept only formats like `1234AB`?
- Should special characters such as `@` always be rejected?
- Should the same validation apply to registration and checkout address forms?

### Frontend Solution

Add a postal code validator to the Angular registration form.

Example simple validation:

```ts
postal_code: new FormControl('', {
  validators: [
    Validators.required,
    Validators.pattern(/^[A-Za-z0-9 ]{3,10}$/)
  ],
  updateOn: 'change'
}),
```

This is only a simple example. The final pattern should be confirmed with the Product Owner, especially if country-specific validation is required.

### Backend Solution

Add backend validation for the `address.postal_code` field in the registration endpoint.

The backend should reject invalid postal code values and return a validation error, for example `422 Unprocessable Content`.

## 8. Acceptance Criteria

- [ ] Empty postal code is rejected.
- [ ] Postal code values containing invalid special characters such as `@` are rejected.
- [ ] Valid postal code values are accepted.
- [ ] A clear validation error message is shown in the UI.
- [ ] Backend validation rejects invalid postal code values.
- [ ] Registration and checkout address forms use consistent postal code validation.
- [ ] Automated tests cover valid and invalid postal code values.
- [ ] Postal code validation rules are documented or clarified in acceptance criteria.

---

## 9. Confirmation Test

After the fix, repeat the same registration flow.

### Confirmation Test Steps

1. Open the registration page.
2. Fill in all required fields.
3. Enter `12@10` as the postal code.
4. Submit the form.

### Expected Confirmation Result

- The form should not be submitted.
- The account should not be created.
- A clear validation error should be displayed for the postal code field.

---