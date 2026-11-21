# Test Execution Report — Day 02 — Czech Language Support

| Field | Value |
|-------|-------|
| Date | 2026-07-02 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US2300-support-czech-language.md` |
| Suite ID | US2300 |
| Executor | Gülbin Deniz |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 4 |
| Failed | 0 |
| Blocked | 0 |
| Not Executed | 4 |
| **Total** | **8** |

## Open Defects

| Defect ID | Severity | Summary | Related Story | Status |
|-----------|----------|---------|---------------|--------|
| DEF-S5-005 | High | Language switcher missing on checkout page | US2300 | Open |
| DEF-S5-015 | Medium | Czech validation message shows English fallback | US2300 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US2300_languageSwitcher_visibleOnHomePage | Language switcher visible on home page | Passed | — |
| T1_US2300_switchToCzech_navigationInCzech | Navigation displayed in Czech after switch | Passed | — |
| T2_US2300_switchBackToEnglish_contentRestored | Switch back to English restores content | Passed | — |
| T3_US2300_czechPersistsAcrossPages | Czech language persists across navigation | Passed | — |
| T4_US2300_invalidLocaleParam_rejected | Invalid locale parameter rejected | Not Executed | — |
| T1_US2300_checkoutWorkflowInCzech | Checkout workflow available in Czech | Not Executed | — |
| T1_US2300_validationMessagesInCzech | Form validation messages in Czech | Not Executed | — |
| T3_US2300_sessionTimeout_languageRetained | Language retained after session refresh | Not Executed | — |
