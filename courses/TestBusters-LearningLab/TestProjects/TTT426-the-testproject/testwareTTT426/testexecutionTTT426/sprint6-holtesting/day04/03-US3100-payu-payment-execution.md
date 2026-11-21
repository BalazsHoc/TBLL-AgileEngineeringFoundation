# Test Execution Report — Day 04 — PayU Payment Integration

| Field | Value |
|-------|-------|
| Date | 2026-07-04 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US3100-support-payment-type-PayU.md` |
| Suite ID | US3100 |
| Executor | Ángela Simões Krainer |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 6 |
| Failed | 2 |
| Blocked | 1 |
| Not Executed | 0 |
| **Total** | **9** |

## Open Defects

| Defect ID | Severity | Summary | Related Story | Status |
|-----------|----------|---------|---------------|--------|
| DEF-S5-001 | High | PayU redirect returns 502 on holtesting staging | US3100 | Open |
| DEF-S5-013 | Medium | PayU CZK amount rounding off by 1 haléř | US3100 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US3100_selectPayUAtCheckout | Customer can select PayU at checkout | Blocked | — |
| T2_US3100_payuHiddenForNonCzechAddress | PayU hidden for non-Czech billing address | Failed | DEF-S5-005 |
| T1_US3100_redirectToPayUPage | Secure redirect to PayU payment page | Failed | DEF-S5-006 |
| T1_US3100_successfulPayment_orderConfirmed | Successful payment creates order confirmation | Passed | — |
| T3_US3100_cancelledPayment_retryAllowed | Cancelled payment shows retry option | Passed | — |
| T3_US3100_failedPayment_clearError | Failed payment shows clear error message | Passed | — |
| T1_US3100_czkAmountTransferred | CZK amount transferred correctly to gateway | Passed | — |
| T5_US3100_noSensitiveDataStored | Sensitive payment data not stored locally | Passed | — |
| T1_US3100_orderStatusSyncedFromPayU | Order status synced from PayU | Passed | — |
