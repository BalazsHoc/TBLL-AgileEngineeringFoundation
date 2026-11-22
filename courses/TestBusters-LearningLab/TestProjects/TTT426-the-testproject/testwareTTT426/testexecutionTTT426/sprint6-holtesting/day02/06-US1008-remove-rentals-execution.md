# Test Execution Report — Day 02 — Remove Rentals Product Group

| Field | Value |
|-------|-------|
| Date | 2026-07-02 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US1008-remove-product-group-rentals.md` |
| Suite ID | US1008 |
| Executor | Serife Cicek |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 4 |
| Failed | 0 |
| Blocked | 0 |
| Not Executed | 1 |
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
| T3_US1008_legacyBookmark_redirectsSafely | Legacy rentals bookmark handled safely | Not Executed | — |
