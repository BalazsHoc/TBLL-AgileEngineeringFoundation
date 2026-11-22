# Test Execution Report — Day 05 — Market-Specific Logo

| Field | Value |
|-------|-------|
| Date | 2026-07-05 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US1007-new-logo.md` |
| Suite ID | US1007 |
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
| DEF-S5-007 | Medium | CZ logo not shown when billing country is CZ | US1007 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US1007_logoDisplayedCZmarket | Czech market logo displayed for CZ billing | Passed | — |
| T1_US1007_logoDisplayedUSmarket | US market logo displayed for US billing | Passed | — |
| T1_US1007_logoDisplayedOthers | Default logo for other markets | Passed | — |
| T2_US1007_logoUpdatesOnMarketChange | Logo updates when market context changes | Passed | — |
| T4_US1007_brokenLogoImage_notShown | Broken logo image not displayed | Passed | — |
