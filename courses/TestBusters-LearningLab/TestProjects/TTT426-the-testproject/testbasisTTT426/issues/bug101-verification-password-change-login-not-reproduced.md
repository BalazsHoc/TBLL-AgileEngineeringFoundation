# Bug Verification Report – Password Change Login Issue

## Title
Password Change – Unable to Reproduce Login Issue After Password Change

---

## Syllabus Reference
ISTQB Foundation Level – Section 1.1.2 Testing and Debugging

---

## Test Basis

UAT V5 Finding:

> After a password change in the account, the user cannot log in anymore.

---

## Test Objective

Verify whether changing the account password prevents the customer from logging in with the new password.

---

## Test Condition

Verify that:

- The password can be changed successfully.
- The user can log in using the new password.
- The old password is no longer accepted.

---

## Test Environment

| Item | Value |
|------|-------|
| Application | Practice Software Testing |
| Version | Sprint 5 |
| Browser | Chrome (macOS) |
| Browser | Safari (macOS) |
| Android | Chrome Browser |
| Date | 09-07-2026 |

**Note**

The Toolshop database is reset every full hour.

To avoid invalid test results caused by automatic data reset, all tests were executed within the same hourly time window.

---

## Preconditions

- A new customer account exists.
- The user is successfully logged in.
- The test is executed before the hourly database reset.

---

## Test Procedure

1. Register a new customer account.
2. Log in using the original password.
3. Navigate to **My Account**.
4. Change the password.
5. Save the changes.
6. Log out.
7. Log in using the new password.
8. Attempt to log in using the old password.

---

## Expected Result

- Password change is saved successfully.
- Login with the new password succeeds.
- Login with the old password is rejected.

---

## Actual Result

The password was changed successfully.

Login using the new password worked correctly on:

- Chrome (macOS)
- Safari (macOS)
- Chrome (Android)

The old password was rejected as expected.

The reported issue could **not** be reproduced.

---

## Test Result

**PASS**

The application behaves as expected.

---

## Bug Reproduction Status

**Not Reproduced**

---

## Conclusion

The reported UAT defect could not be reproduced under controlled test conditions.

The hourly database reset was considered during testing to eliminate false negatives caused by automatic removal of test data.

---

## Recommendation

Request additional information from the original UAT reporter if the issue still exists:

- Exact browser or platform
- Build/version tested
- User account used
- Exact reproduction steps
- Time of execution
- Whether the test crossed the hourly database reset
