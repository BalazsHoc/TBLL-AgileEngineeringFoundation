# Test Execution Report — Day 05 — Delivery Options and Costs

| Field | Value |
|-------|-------|
| Date | 2026-07-05 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US4200-delivery-costs.md` |
| Suite ID | US4200 |
| Executor | Gülbin Deniz |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 5 |
| Failed | 0 |
| Blocked | 1 |
| Not Executed | 3 |
| **Total** | **9** |

## Open Defects

| Defect ID | Severity | Summary | Related Story | Status |
|-----------|----------|---------|---------------|--------|
| DEF-S5-003 | Medium | Zásilkovna shown for US shipping address | US4200 | Open |
| DEF-S5-008 | High | Heavy delivery tier applied at 9.9 kg | US4200 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US4200_standardShownForAllRegions | Standard delivery shown for CZ, EU, US, Others | Passed | — |
| T1_US4200_zasilkovaShownForCZandDACH | Zásilkovna shown for CZ and DACH only | Passed | — |
| T4_US4200_zasilkovaHiddenForUS | Zásilkovna not shown for US shipping | Passed | — |
| T1_US4200_lightTierBelow10kg | Light tier applied below 10 kg | Passed | — |
| T1_US4200_heavyTierAt10kgOrMore | Heavy tier applied at 10 kg or more | Passed | — |
| T2_US4200_czkPricingForCzechBilling | CZK pricing for Czech billing country | Not Executed | — |
| T1_US4200_usdPricingForNonCzechBilling | USD pricing for non-Czech billing | Not Executed | — |
| T3_US4200_weightBoundary_exactly10kg | Weight boundary at exactly 10 kg | Not Executed | — |
| T1_US4200_priceMatchesMatrix | Displayed price matches pricing matrix | Blocked | — |
