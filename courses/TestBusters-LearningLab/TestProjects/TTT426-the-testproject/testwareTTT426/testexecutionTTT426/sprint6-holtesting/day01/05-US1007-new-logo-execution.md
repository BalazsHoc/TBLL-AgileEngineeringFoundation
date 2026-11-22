# Test Execution Report — Day 01 — Market-Specific Logo

| Field | Value |
|-------|-------|
| Date | 2026-07-01 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US1007-new-logo.md` |
| Suite ID | US1007 |
| Executor | Holtesting Nightly |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 1 |
| Failed | 0 |
| Blocked | 2 |
| Not Executed | 2 |
| **Total** | **5** |

## Open Defects

| Defect ID | Severity | Summary | Related Story | Status |
|-----------|----------|---------|---------------|--------|
| DEF-S5-007 | Medium | CZ logo not shown when billing country is CZ | US1007 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US1007_logoDisplayedCZmarket | Czech market logo displayed for CZ billing | Blocked | — |
| T1_US1007_logoDisplayedUSmarket | US market logo displayed for US billing | Blocked | — |
| T1_US1007_logoDisplayedOthers | Default logo for other markets | Passed | — |
| T2_US1007_logoUpdatesOnMarketChange | Logo updates when market context changes | Not Executed | — |
| T4_US1007_brokenLogoImage_notShown | Broken logo image not displayed | Not Executed | — |
