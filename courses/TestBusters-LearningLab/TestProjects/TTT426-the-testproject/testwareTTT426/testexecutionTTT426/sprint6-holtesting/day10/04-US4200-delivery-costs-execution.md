# Test Execution Report — Day 10 — Delivery Options and Costs

| Field | Value |
|-------|-------|
| Date | 2026-07-10 |
| Sprint | Sprint 5 — Holtesting |
| SUT | ToolShop Holtesting V6 — https://holtesting.practicesoftwaretesting.com/ |
| Test Basis | `testbasisTTT426/userstories/sprint5-holtesting/US4200-delivery-costs.md` |
| Suite ID | US4200 |
| Executor | Serife Cicek |
| Environment | holtesting-staging |

## Execution Summary

| Status | Count |
|--------|------:|
| Passed | 8 |
| Failed | 1 |
| Blocked | 0 |
| Not Executed | 0 |
| **Total** | **9** |

## Open Defects

| Defect ID | Severity | Summary | Related Story | Status |
|-----------|----------|---------|---------------|--------|
| DEF-S5-003 | Medium | Zásilkovna shown for US shipping address | US4200 | Open |

## Test Case Results

| Test Case ID | Description | Status | Linked Defect |
|--------------|-------------|--------|---------------|
| T1_US4200_standardShownForAllRegions | Standard delivery shown for CZ, EU, US, Others | Passed | — |
| T1_US4200_zasilkovaShownForCZandDACH | Zásilkovna shown for CZ and DACH only | Passed | — |
| T4_US4200_zasilkovaHiddenForUS | Zásilkovna not shown for US shipping | Passed | — |
| T1_US4200_lightTierBelow10kg | Light tier applied below 10 kg | Passed | — |
| T1_US4200_heavyTierAt10kgOrMore | Heavy tier applied at 10 kg or more | Failed | DEF-S5-014 |
| T2_US4200_czkPricingForCzechBilling | CZK pricing for Czech billing country | Passed | — |
| T1_US4200_usdPricingForNonCzechBilling | USD pricing for non-Czech billing | Passed | — |
| T3_US4200_weightBoundary_exactly10kg | Weight boundary at exactly 10 kg | Passed | — |
| T1_US4200_priceMatchesMatrix | Displayed price matches pricing matrix | Passed | — |
