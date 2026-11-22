# Test Execution Report — Day 01 — Automated Regression Suite

| Field | Value |
|-------|-------|
| Date | 2026-07-01 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US4510-Regression-Tests.md` |
| Suite ID | US4510 |
| Executor | Holtesting Nightly |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 1 |
| Failed | 0 |
| Blocked | 2 |
| Not Executed | 7 |
| **Total** | **10** |

## Open Defects

| Defect ID | Severity | Summary | Related Story | Status |
|-----------|----------|---------|---------------|--------|
| DEF-S5-001 | High | PayU redirect returns 502 on holtesting staging | US3100 | Open |
| DEF-S5-003 | Medium | Zásilkovna shown for US shipping address | US4200 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US4510_loginRegressionPass | Login regression passes | Blocked | — |
| T1_US4510_checkoutRegressionPass | Checkout regression passes | Blocked | — |
| T1_US4510_searchRegressionPass | Search regression passes | Passed | — |
| T1_US4510_cartRegressionPass | Cart regression passes | Not Executed | — |
| T1_US4510_profileRegressionPass | Profile regression passes | Not Executed | — |
| T3_US4510_paymentGatewayMockFails_graceful | Payment gateway mock failure handled | Not Executed | — |
| T1_US4510_registrationRegressionPass | Registration regression passes | Not Executed | — |
| T1_US4510_productDetailRegressionPass | Product detail regression passes | Not Executed | — |
| T1_US4510_categoryRegressionPass | Category page regression passes | Not Executed | — |
| T1_US4510_contactRegressionPass | Contact form regression passes | Not Executed | — |
