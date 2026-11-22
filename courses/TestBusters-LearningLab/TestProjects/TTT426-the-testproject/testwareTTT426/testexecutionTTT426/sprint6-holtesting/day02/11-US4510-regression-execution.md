# Test Execution Report — Day 02 — Automated Regression Suite

| Field | Value |
|-------|-------|
| Date | 2026-07-02 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US4510-Regression-Tests.md` |
| Suite ID | US4510 |
| Executor | Ángela Simões Krainer |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 5 |
| Failed | 0 |
| Blocked | 0 |
| Not Executed | 5 |
| **Total** | **10** |

## Open Defects

| Defect ID | Severity | Summary | Related Story | Status |
|-----------|----------|---------|---------------|--------|
| DEF-S5-001 | High | PayU redirect returns 502 on holtesting staging | US3100 | Open |
| DEF-S5-003 | Medium | Zásilkovna shown for US shipping address | US4200 | Open |
| DEF-S5-008 | High | Heavy delivery tier applied at 9.9 kg | US4200 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US4510_loginRegressionPass | Login regression passes | Passed | — |
| T1_US4510_checkoutRegressionPass | Checkout regression passes | Passed | — |
| T1_US4510_searchRegressionPass | Search regression passes | Passed | — |
| T1_US4510_cartRegressionPass | Cart regression passes | Passed | — |
| T1_US4510_profileRegressionPass | Profile regression passes | Passed | — |
| T3_US4510_paymentGatewayMockFails_graceful | Payment gateway mock failure handled | Not Executed | — |
| T1_US4510_registrationRegressionPass | Registration regression passes | Not Executed | — |
| T1_US4510_productDetailRegressionPass | Product detail regression passes | Not Executed | — |
| T1_US4510_categoryRegressionPass | Category page regression passes | Not Executed | — |
| T1_US4510_contactRegressionPass | Contact form regression passes | Not Executed | — |
