# Test Execution Report — Day 02 — Czech Product Content

| Field | Value |
|-------|-------|
| Date | 2026-07-02 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US2350-czech-products.md` |
| Suite ID | US2350 |
| Executor | Rudolf Gröetz |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 4 |
| Failed | 0 |
| Blocked | 2 |
| Not Executed | 2 |
| **Total** | **8** |

## Open Defects

| Defect ID | Severity | Summary | Related Story | Status |
|-----------|----------|---------|---------------|--------|
| DEF-S5-002 | Medium | Czech product title missing for SKU-HAMMER-42 | US2350 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US2350_productTitleInCzech | Product title in Czech on detail page | Blocked | — |
| T1_US2350_productDescriptionInCzech | Product description in Czech | Blocked | — |
| T2_US2350_fallbackLanguageForUntranslated | Fallback language for untranslated product | Passed | — |
| T1_US2350_searchResultsInCzech | Search results show Czech titles | Passed | — |
| T1_US2350_specialCharactersDisplayed | Czech special characters displayed correctly | Passed | — |
| T3_US2350_switchLanguage_productContextKept | Language switch keeps product context | Passed | — |
| T1_US2350_cartOverviewCzechContent | Cart shows Czech product content | Not Executed | — |
| T4_US2350_missingTranslation_gracefulFallback | Missing translation shows defined fallback | Not Executed | — |
