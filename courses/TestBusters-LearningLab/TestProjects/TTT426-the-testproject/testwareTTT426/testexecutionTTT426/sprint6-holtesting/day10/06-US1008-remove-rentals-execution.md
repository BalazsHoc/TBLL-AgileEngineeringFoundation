# Test Execution Report — Day 10 — Remove Rentals Product Group

| Field | Value |
|-------|-------|
| Date | 2026-07-10 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US1008-remove-product-group-rentals.md` |
| Suite ID | US1008 |
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
| DEF-S5-006 | Medium | Rentals category still indexed in sitemap | US1008 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US1008_rentalsNotInNavigation | Rentals removed from main navigation | Passed | — |
| T1_US1008_rentalsNotInSearch | Rentals products excluded from search | Passed | — |
| T4_US1008_directRentalsUrl_notAccessible | Direct rentals URL not accessible | Passed | — |
| T1_US1008_categoryPageNoRentals | Category pages exclude rentals group | Passed | — |
| T3_US1008_legacyBookmark_redirectsSafely | Legacy rentals bookmark handled safely | Passed | — |
