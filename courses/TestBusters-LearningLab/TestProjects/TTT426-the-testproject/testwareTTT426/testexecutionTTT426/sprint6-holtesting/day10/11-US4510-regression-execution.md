# Test Execution Report — Day 10 — Automated Regression Suite

| Field | Value |
|-------|-------|
| Date | 2026-07-10 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US4510-Regression-Tests.md` |
| Suite ID | US4510 |
| Executor | Gülbin Deniz |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 9 |
| Failed | 1 |
| Blocked | 0 |
| Not Executed | 0 |
| **Total** | **10** |

## Open Defects

| Defect ID | Severity | Summary | Related Story | Status |
|-----------|----------|---------|---------------|--------|
| DEF-S5-001 | High | PayU redirect returns 502 on holtesting staging | US3100 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US4510_loginRegressionPass | Login regression passes | Passed | — |
| T1_US4510_checkoutRegressionPass | Checkout regression passes | Passed | — |
| T1_US4510_searchRegressionPass | Search regression passes | Passed | — |
| T1_US4510_cartRegressionPass | Cart regression passes | Passed | — |
| T1_US4510_profileRegressionPass | Profile regression passes | Passed | — |
| T3_US4510_paymentGatewayMockFails_graceful | Payment gateway mock failure handled | Passed | — |
| T1_US4510_registrationRegressionPass | Registration regression passes | Passed | — |
| T1_US4510_productDetailRegressionPass | Product detail regression passes | Passed | — |
| T1_US4510_categoryRegressionPass | Category page regression passes | Failed | DEF-S5-003 |
| T1_US4510_contactRegressionPass | Contact form regression passes | Passed | — |
