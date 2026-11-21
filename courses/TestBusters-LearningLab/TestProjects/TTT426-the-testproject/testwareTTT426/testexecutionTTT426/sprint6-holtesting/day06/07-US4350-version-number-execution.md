# Test Execution Report — Day 06 — Build Version Display

| Field | Value |
|-------|-------|
| Date | 2026-07-06 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US4350-version-number.md` |
| Suite ID | US4350 |
| Executor | Ángela Simões Krainer |
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
| DEF-S5-004 | Low | Build date format inconsistent in footer | US4350 | Open |
| DEF-S5-014 | Low | Version modal missing Angular version on mobile | US4350 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US4350_buildNumberInFooter | Build number visible in footer | Passed | — |
| T1_US4350_buildDateDisplayed | Build date displayed | Passed | — |
| T1_US4350_angularVersionDisplayed | Angular version displayed | Passed | — |
| T2_US4350_versionViaMenuModal | Version info accessible via menu modal | Passed | — |
| T4_US4350_versionNotExposedInApi | Version not over-exposed in public API | Passed | — |
