# Test Summary Report – V5

## ToolShop Web Application – Version 5

## Document Information

| Field | Information |
|-------|-------------|
| Project | ToolShop Web Application |
| Team | QualityQuest Consulting (QQC) |
| Version | V5 |
| Document | Test Summary Report |
| Standard | ISO/IEC/IEEE 29119-3 |
| Author | Gülbin Deniz |
| Reviewer | Rudolf Gröetz |
| Date | 06.07.2026 |
| Status | Releases / Accepted |

---

# 1. Purpose

This Test Summary Report summarizes the testing activities performed for ToolShop Web Application Version 5. It provides an overview of the test scope, test execution, test results, identified defects, and the release recommendation for Version 5.

---

# 2. Test Scope

The following functional areas were tested for Version 5:

- Admin Account
- Authentication
- Checkout
- Customer Account
- Product Overview
- Product Detail
- Product Category

### Not Tested

- Multi Language *(test cases were not completed)*
- Privacy Policy *(no test cases available)*

### Test Approach

- Risk-Based Testing
- Requirements-Based Testing
- Use Case-Based Testing
- User Acceptance Testing (UAT)
- Exploratory Testing
- Regression Testing

---

# 3. Test Execution Summary

| Metric | Result |
|--------|-------:|
| Planned Test Cases | 115 |
| Executed Test Cases | 84 |
| Passed | 75 |
| Failed | 7 |
| Blocked | 2 |
| Not Executed | 31 |

Detailed execution results are documented in [Testiny](https://app.testiny.io/p/96/testcases/tc/682).

---

# 4. Test Results

The planned testing activities were executed according to the Product Test Plan.

User Acceptance Testing (UAT) was successfully completed.

In addition to manual testing, automated testing was performed using Playwright. The results of the automated test runs are documented in Testiny.

---

# 5. Defect Summary

Several findings were identified during User Acceptance Testing (UAT).

| Bug ID | Summary | Severity | Priority | Status | Comment |
|--------|---------|----------|----------|--------|---------|
| BUG-001 | Registration accepts invalid postal code values during account creation | Medium | P2 | Open | Review and correct the postal code validation in Version 6. |
| BUG-002 | Contact form file upload validation failed | Medium | P1 | Open | Resolve in Version 6. |
| BUG-003 | Password change fails with valid current and new password | High | P1 | Open | Investigate the root cause and resolve in Version 6. |
| BUG-004 | Password strength validation does not work during registration | Medium | P2 | Open | Review and improve the password strength validation in Version 6. |
| BUG-005 | Multiple payment submissions are possible after payment | High | P1 | Open | Prevent multiple payment submissions and resolve in Version 6. |

Detailed defect information, testing evidence and debugging findings are documented separately.

**Reference**

- [GitHub Issues (Defect Documentation and Tracking):](https://github.com/rgroetz2/TBLL-AgileEngineeringFoundation/tree/main/courses/TestBusters-LearningLab/ISTQB-2026/TTT426-the-testproject/testbasisTTT426/issues)

---

# 6. Risks and Limitations

Not all planned test cases could be executed during UAT. A total of **31 test cases** were not executed.

The following functional areas could not be fully tested:

- Multi Language *(test cases were not completed)*
- Privacy Policy *(no test cases available)*

### Identified Residual Risks

**Multi Language**

The functionality could not be tested. Therefore, there is a risk that language switching or translations may not work correctly for the planned Czech rollout in Version 6, potentially affecting the user experience.

**Privacy Policy**

Since no test cases were available, this functionality could not be verified. Therefore, a residual risk remains regarding compliance with data protection requirements (e.g., GDPR) and the correct presentation of privacy-related information.

---

# 7. Release Recommendation

Based on the results of the User Acceptance Test, the QA team recommends the release of Version 5.

The identified defects will be tracked according to their priority and are planned to be resolved in Version 6.

---

# 8. Release Decision

The final release decision will be made and documented by the Product Owner based on the test results and identified defects.

**Product Owner:** Rudolf Gröetz

**Decision:**

- ☐ Approved (by R. Groetz)
- ☐ Approved with Conditions
- ☐ Not Approved

**Date:**
20260706
---

# 9. References

- [Product Test Plan V5](https://github.com/guelbin/RBI-AgileEngineeringFoundation/blob/update-product-test-plan-v1.1/courses/TestBusters-LearningLab/ISTQB-2026/TTT426-the-testproject/testwareTTT426/testPlan-product-WEB.md)
- [Sprint Test Plan](https://app.testiny.io/p/96/testplans/tp/114)
- [Testiny (Test Cases and Test Results)](https://app.testiny.io/p/96/testruns/tr/188/tc/694)
- [GitHub Issues (Defect Tracking Repository)](https://github.com/rgroetz2/TBLL-AgileEngineeringFoundation/tree/main/courses/TestBusters-LearningLab/ISTQB-2026/TTT426-the-testproject/testbasisTTT426/issues)
- [ISO/IEC/IEEE 29119-3](https://wildart.github.io/MISG5020/standards/ISO-IEC-IEEE-29119-3.pdf)

---

# Appendix

## Test Execution Overview

| Test Run | Planned | Executed | Passed | Failed | Blocked | Not Executed |
|----------|--------:|---------:|-------:|-------:|--------:|-------------:|
| CRUD | 6 | 0 | 0 | 0 | 0 | 6 |
| Reporting | 5 | 0 | 0 | 0 | 0 | 5 |
| Login | 5 | 5 | 5 | 0 | 0 | 0 |
| Two-Factor Authentication | 2 | 0 | 0 | 0 | 0 | 2 |
| Automated | 1 | 0 | 0 | 0 | 0 | 1 |
| Address Details | 6 | 6 | 5 | 0 | 1 | 0 |
| Delete Item | 5 | 5 | 5 | 0 | 0 | 0 |
| Increase/Decrease Quantity | 6 | 6 | 6 | 0 | 0 | 0 |
| Payment Options | 21 | 14 | 13 | 0 | 1 | 7 |
| Contact Form (Customer Account) | 5 | 5 | 4 | 1 | 0 | 0 |
| Customer Login | 5 | 5 | 3 | 2 | 0 | 0 |
| Favorites | 3 | 3 | 3 | 0 | 0 | 0 |
| Invoices | 3 | 3 | 3 | 0 | 0 | 0 |
| Messages | 2 | 2 | 2 | 0 | 0 | 0 |
| Profile | 4 | 4 | 0 | 4 | 0 | 0 |
| Privacy Policy | 5 | 0 | 0 | 0 | 0 | 5 |
| Multi Language | 5 | 0 | 0 | 0 | 0 | 5 |
| Product Category | 1 | 1 | 1 | 0 | 0 | 0 |
| Product Detail | 11 | 11 | 11 | 0 | 0 | 0 |
| Filter | 3 | 3 | 3 | 0 | 0 | 0 |
| Pagination | 1 | 1 | 1 | 0 | 0 | 0 |
| Price Range | 1 | 1 | 1 | 0 | 0 | 0 |
| Product List | 1 | 1 | 1 | 0 | 0 | 0 |
| Search | 5 | 5 | 5 | 0 | 0 | 0 |
| Sorting | 3 | 3 | 3 | 0 | 0 | 0 |
| **Total** | **115** | **84** | **75** | **7** | **2** | **31** |
