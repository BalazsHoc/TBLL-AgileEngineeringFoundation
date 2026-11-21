# Test Execution Report — Day 03 — API Security Checks

| Field | Value |
|-------|-------|
| Date | 2026-07-03 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/sprint5-holtesting (cross-story)` |
| Suite ID | API |
| Executor | Rudolf Gröetz |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 5 |
| Failed | 0 |
| Blocked | 0 |
| Not Executed | 0 |
| **Total** | **5** |

## Open Defects

| Defect ID | Severity | Summary | Related Story | Status |
|-----------|----------|---------|---------------|--------|
| DEF-S5-011 | High | API invoices endpoint returns all users invoices | API | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T5_API_usersBrokenObjectAuth | Users API broken object authorization | Passed | — |
| T5_API_productsAdminOnlyDelete | Products delete requires admin token | Passed | — |
| T5_API_invoicesScopedToUser | Invoices scoped to authenticated user | Passed | — |
| T4_API_invalidToken_rejected | Invalid token rejected | Passed | — |
| T5_API_rateLimiterReportsEndpoint | Reports API rate limiter behavior | Passed | — |
