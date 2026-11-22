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
| Date tested | 05-07-2026 |
| Browser / OS | Chrome / mac |

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

## 4. Testing Evidence

### Preconditions

- Toolshop website is open.
- User is on the registration page.
- A new email address is available for registration.
- All other required fields are filled with valid data.

### Steps to Reproduce via UI

1. Open Toolshop.
2. Navigate to the registration page.
3. Fill in all required user and address fields.
4. Enter one of the following invalid postal code values:
   - `12@10`
   - `@@@@@`
   - `ABCDE`
5. Submit the registration form.

### UI Test Data and Result

| Postal Code Input | Result |
|---|---|
| `12345` | Accepted |
| `ABCDE` | Accepted |
| `12@10` | Accepted |
| `@@@@@` | Accepted |
| Empty field | Rejected |

### Expected Result

The registration form should reject clearly invalid postal code values and show a validation error message.

### Actual Result

The registration form accepts all tested non-empty postal code values, including values containing special characters.  
The account can be created with invalid postal code data.

### Observed Failure

A user can create an account with invalid address data.

---

## 5. API Evidence

The issue was also reproduced directly through Swagger using:

```http
POST /users/register
```

### API Result with Invalid Postal Code

When the request body contained an invalid postal code such as:

```json
"postal_code": "12@10"
```

the API returned:

```http
201 Created
```

This means the backend accepted the invalid postal code and created the user.

### API Result with Empty Postal Code

When the postal code was empty, the API returned:

```http
422 Unprocessable Content
```

This indicates that backend validation exists for missing or invalid basic input, but no postal code format validation was observed.

### API Observation

Based on UI and API testing, the system validates that a postal code value is present, but does not validate the postal code format or allowed characters.

---

## 6. Risk / Quality Impact

- Invalid customer address data may be stored in the database.
- Address lookup and checkout flows may later use incorrect postal code values.
- Delivery-related workflows may fail or require manual correction.
- Data quality in customer profiles is reduced.
- The issue may cause confusion for users if invalid data is accepted silently.

---

### Testing Activities

The tester performed the following activities:

- Reproduced the issue through the UI.
- Tested multiple postal code inputs.
- Reproduced the issue through Swagger/API.
- Recorded expected and actual results.
- Documented the risk and quality impact.
- Prepared this defect handover artifact.
