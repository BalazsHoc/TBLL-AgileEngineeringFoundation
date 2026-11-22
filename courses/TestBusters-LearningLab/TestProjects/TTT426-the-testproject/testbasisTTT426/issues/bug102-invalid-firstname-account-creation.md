# Bug Report – Invalid First Name Accepted During Account Registration

## Title

Registration – First Name Field Accepts Invalid Special Characters

---

## Syllabus Reference

ISTQB Foundation Level – Section 1.1.2 Testing and Debugging

---

## Test Basis

UAT V5 Finding:

> Invalid characters can be used in the first name field during account registration.

---

## Test Objective

Verify that the registration process validates the first name field and rejects invalid values containing inappropriate special characters.

---

## Test Condition

Verify that the registration process does not allow invalid first name values such as:

- `@@@`
- `&?Test`

through both:

- Web Registration Form
- REST API (Swagger)

---

## Test Environment

| Item | Value |
|------|-------|
| Application | Practice Software Testing / Toolshop |
| Version | Sprint 5 |
| UI | Chrome (macOS) |
| API | Swagger |
| Date | 09-07-2026 |

**Note**

The Toolshop database is reset every full hour.

The tests were executed within the same hourly time window to avoid data loss caused by the automatic database reset.

---

## Preconditions

- Registration page is available.
- Swagger API is available.
- A unique email address is used.
- All mandatory fields contain valid values except the first name.

---

## Test Data

### UI

| Field | Value |
|------|-------|
| First Name | `&?Test` |
| Last Name | `User` |
| Email | unique email |
| Password | valid password |

### API

```json
{
  "first_name": "@@@",
  "last_name": "User",
  ...
}
```

---

## Test Procedure

### Scenario 1 – Web Registration

1. Open the registration page.
2. Enter `&?Test` as the first name.
3. Fill all remaining mandatory fields with valid data.
4. Submit the registration form.
5. Observe the result.

### Scenario 2 – REST API

1. Open Swagger.
2. Execute `POST /users/register`.
3. Set:

```json
"first_name": "@@@"
```

4. Fill all remaining required fields with valid values.
5. Execute the request.
6. Observe the response.

---

## Expected Result

The application should reject invalid first name values.

A validation error should be displayed.

The account should not be created.

The REST API should reject the request and return a validation error (HTTP 422).

---

## Actual Result

### Web UI

The registration form accepted `&?Test` as the first name.

No validation error was displayed.

The customer account was created successfully.

### REST API

The API accepted `@@@` as the first name.

The request returned **201 Created**.

The customer account was successfully created.

---

## Test Result

**FAILED**

The defect was successfully reproduced through both the Web UI and the REST API.

---

## Failure

The application does not validate the first name format.

Invalid first name values can be submitted through both supported registration interfaces:

- Web UI
- REST API

As a result, invalid customer names can be stored in the database.

---

## Related Defect

Incomplete validation of customer first name during account registration.

---

## Possible Human Error / Root Cause

Initial investigation indicates that validation rules are incomplete.

Frontend validation only checks whether the field is required.

Backend validation checks type and maximum length but does not validate an acceptable name format.

A detailed root cause analysis is documented separately.

---

## Severity

**Medium**

---

## Priority

To be determined by the Product Owner.

---

## Risk / Impact

- Invalid customer data is stored.
- Customer profile quality is reduced.
- Invalid names may appear in emails, invoices, reports, and administration pages.
- API consumers can bypass frontend validation.
- Downstream systems may receive unrealistic customer information.

---

## Status

Open

---

## Recommendation

Implement consistent first name validation in both frontend and backend.

The Product Owner should define the accepted character set.

Validation should be shared across all registration entry points.

---

## Debugging Status

Root Cause Analysis completed.

See:

`bug102-invalid-firstname-account-creation-reason.md`