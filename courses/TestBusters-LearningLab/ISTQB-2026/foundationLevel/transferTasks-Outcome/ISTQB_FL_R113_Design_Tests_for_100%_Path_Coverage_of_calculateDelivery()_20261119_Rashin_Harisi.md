# Design Tests for 100% Path Coverage of `calculateDelivery()`

## Syllabus Reference
ISTQB Foundation Level – **White-Box Test Techniques (Section 4.3)**. This transfer task focuses specifically on **feasible path coverage**.

## Transfer Task
**Task:** [Design Tests for 100% Path Coverage of `calculateDelivery()`](https://github.com/rgroetz2/TBLL-AgileEngineeringFoundation/blob/main/courses/TestBusters-LearningLab/ISTQB-2026/foundationLevel/transferTasks/Chapter%204/ISTQB-FL-4.3_CalculateDelivery_Path_Coverage.md)  
**Function Under Test:** `calculateDelivery(country, cartValue, discount)`  
**Source:** [`deliveryCosts.c`](https://github.com/rgroetz2/TBLL-AgileEngineeringFoundation/blob/main/courses/TestBusters-LearningLab/ISTQB-2026/foundationLevel/transferTasks/Chapter%204/ISTQB-FL-4.3_deliveryCosts.c)  
**Technique:** White-box testing – Path Coverage  
**Deliverable:** Control-flow outline, flowchart, feasible-path list, test-design table, and coverage summary

> **Scope:** This report covers only `calculateDelivery()`, not `main()`. All paths, input values, and results were derived by reading the source code. **The code was not modified, compiled, or executed.** The source is the only specification provided; there are no separate business requirements.

## Outcome

### 1. Objective and Scope

Design test cases that cover **every feasible execution path** from the beginning of `calculateDelivery()` to a `return`. This includes early returns during validation, delivery-cost selection, the normal return, and the order in which `||` operands are evaluated.

### 2. Source-Code Behavior and Assumptions

The function creates a `DeliveryResult` with these initial values:

```cpp
{ deliveryCost: 0.0, totalCost: 0.0, deliveryAvailable: true, message: "" }
```

The function then checks the cart value, checks the discount, calculates `orderValue = cartValue - discount`, selects a delivery cost, and returns a result. It may return early before calculating `orderValue` or `totalCost`.

**Assumptions for test design:**

- The input values are ordinary finite numbers (not `NaN` or infinity).
- Country names must exactly match the strings in the source code, including capitalization.
- Expected values come from the code, not from an external delivery policy.
- The C++ `||` operator is evaluated **from left to right** and uses **short-circuit evaluation**: when an operand is true, later operands are not evaluated.
- Each test is designed for one distinct feasible path. The tests have **not been executed**.

### 3. Control-Flow Outline

1. Initialize `DeliveryResult`.
2. If `cartValue <= 0`, set `deliveryAvailable = false`, set the cart error message, and **return immediately**.
3. Otherwise, evaluate `discount < 0`. If true, set the invalid-discount result and **return immediately**. If false, evaluate `discount > cartValue`; if true, return the same invalid-discount result.
4. Otherwise, calculate `orderValue = cartValue - discount`.
5. Check whether the country is Austria. If yes, use `orderValue >= 100.0` to select free or standard delivery.
6. Otherwise, check Germany. If yes, use `orderValue >= 100.0` to select free or standard delivery.
7. Otherwise, evaluate `France || Italy || Spain || Netherlands`, **left to right**. When the first matching country is found, the remaining country comparisons are skipped and EU delivery is selected.
8. If none of those country conditions matches, set `deliveryAvailable = false`, set the unavailable-country message, and **return immediately**.
9. For supported countries, calculate `totalCost = orderValue + deliveryCost` and **return**.

### 4. Control-Flow Diagram

![Control-flow diagram of calculateDelivery()](./images/Control%20Flow.png)

### 5. Identified Feasible Paths

To keep the tables readable, the following abbreviations are used **only for the path descriptions**:

| Code | Source-code condition |
|---|---|
| `C` | `cartValue <= 0` |
| `D1` | `discount < 0` |
| `D2` | `discount > cartValue` |
| `AT` | `country == "Austria"` |
| `AT100` | `orderValue >= 100.0` inside the Austria branch |
| `DE` | `country == "Germany"` |
| `DE100` | `orderValue >= 100.0` inside the Germany branch |
| `FR` | `country == "France"` |
| `IT` | `country == "Italy"` |
| `ES` | `country == "Spain"` |
| `NL` | `country == "Netherlands"` |

`T` means True and `F` means False. A condition not shown in a path was **not evaluated**. In every non-error path, `orderValue` is calculated after the validation checks and the function finishes with **`totalCost` calculation → normal return**.

| Path ID | Conditions evaluated in order | Path outcome |
|---|---|---|
| P01 | `C=T` | Invalid cart → early return |
| P02 | `C=F → D1=T` | Negative discount → early return (`D2` skipped) |
| P03 | `C=F → D1=F → D2=T` | Discount exceeds cart → early return |
| P04 | `C=F → D1=F → D2=F → AT=T → AT100=F` | Austria, standard delivery → normal return |
| P05 | `C=F → D1=F → D2=F → AT=T → AT100=T` | Austria, free delivery → normal return |
| P06 | `C=F → D1=F → D2=F → AT=F → DE=T → DE100=F` | Germany, standard delivery → normal return |
| P07 | `C=F → D1=F → D2=F → AT=F → DE=T → DE100=T` | Germany, free delivery → normal return |
| P08 | `C=F → D1=F → D2=F → AT=F → DE=F → FR=T` | France, EU delivery; later `||` operands skipped → normal return |
| P09 | `C=F → D1=F → D2=F → AT=F → DE=F → FR=F → IT=T` | Italy, EU delivery; later `||` operands skipped → normal return |
| P10 | `C=F → D1=F → D2=F → AT=F → DE=F → FR=F → IT=F → ES=T` | Spain, EU delivery; `NL` skipped → normal return |
| P11 | `C=F → D1=F → D2=F → AT=F → DE=F → FR=F → IT=F → ES=F → NL=T` | Netherlands, EU delivery → normal return |
| P12 | `C=F → D1=F → D2=F → AT=F → DE=F → FR=F → IT=F → ES=F → NL=F` | Unsupported country → early return |

**Total:** **12 feasible entry-to-exit paths**: 3 validation exits + 2 Austria paths + 2 Germany paths + 4 EU-country short-circuit paths + 1 unsupported-country exit.

### 6. Test Design Table

**Expected Result notation:** Each row provides all four returned `DeliveryResult` fields: `deliveryCost`, `totalCost`, `deliveryAvailable`, and `message`. These results are **predicted from source-code inspection**.

| Test Case ID | Inputs (`country`, `cartValue`, `discount`) | Executed Path (predicted) | Expected Result | Coverage Goal |
|---|---|---|---|---|
| **TC01** | `("Austria", 0.0, 10.0)` | `C=T` → cart error → **early return** | `deliveryCost=0.00`<br>`totalCost=0.00`<br>`deliveryAvailable=false`<br>`message="Shopping cart is empty or invalid"` | **P01** – invalid cart |
| **TC02** | `("Austria", 20.0, -10.0)` | `C=F → D1=T` → invalid discount → **early return**; `D2` not evaluated | `deliveryCost=0.00`<br>`totalCost=0.00`<br>`deliveryAvailable=false`<br>`message="Invalid discount"` | **P02** – negative discount |
| **TC03** | `("Austria", 20.0, 30.0)` | `C=F → D1=F → D2=T` → invalid discount → **early return** | `deliveryCost=0.00`<br>`totalCost=0.00`<br>`deliveryAvailable=false`<br>`message="Invalid discount"` | **P03** – excessive discount |
| **TC04** | `("Austria", 20.0, 10.0)` | `C=F → D1=F → D2=F → AT=T → AT100=F` → total calculation → **return** | `deliveryCost=5.90`<br>`totalCost=15.90`<br>`deliveryAvailable=true`<br>`message="Standard Delivery"` | **P04** – Austria standard |
| **TC05** | `("Austria", 130.0, 20.0)` | `C=F → D1=F → D2=F → AT=T → AT100=T` → total calculation → **return** | `deliveryCost=0.00`<br>`totalCost=110.00`<br>`deliveryAvailable=true`<br>`message="Free Delivery"` | **P05** – Austria free |
| **TC06** | `("Germany", 20.0, 10.0)` | `C=F → D1=F → D2=F → AT=F → DE=T → DE100=F` → total calculation → **return** | `deliveryCost=9.90`<br>`totalCost=19.90`<br>`deliveryAvailable=true`<br>`message="Standard Delivery"` | **P06** – Germany standard |
| **TC07** | `("Germany", 130.0, 20.0)` | `C=F → D1=F → D2=F → AT=F → DE=T → DE100=T` → total calculation → **return** | `deliveryCost=0.00`<br>`totalCost=110.00`<br>`deliveryAvailable=true`<br>`message="Free Delivery"` | **P07** – Germany free |
| **TC08** | `("France", 130.0, 20.0)` | `C=F → D1=F → D2=F → AT=F → DE=F → FR=T` → remaining country checks skipped → total calculation → **return** | `deliveryCost=14.90`<br>`totalCost=124.90`<br>`deliveryAvailable=true`<br>`message="EU Delivery"` | **P08** – France first operand |
| **TC09** | `("Italy", 130.0, 20.0)` | `C=F → D1=F → D2=F → AT=F → DE=F → FR=F → IT=T` → later country checks skipped → total calculation → **return** | `deliveryCost=14.90`<br>`totalCost=124.90`<br>`deliveryAvailable=true`<br>`message="EU Delivery"` | **P09** – Italy second operand |
| **TC10** | `("Spain", 130.0, 20.0)` | `C=F → D1=F → D2=F → AT=F → DE=F → FR=F → IT=F → ES=T` → `NL` skipped → total calculation → **return** | `deliveryCost=14.90`<br>`totalCost=124.90`<br>`deliveryAvailable=true`<br>`message="EU Delivery"` | **P10** – Spain third operand |
| **TC11** | `("Netherlands", 130.0, 20.0)` | `C=F → D1=F → D2=F → AT=F → DE=F → FR=F → IT=F → ES=F → NL=T` → total calculation → **return** | `deliveryCost=14.90`<br>`totalCost=124.90`<br>`deliveryAvailable=true`<br>`message="EU Delivery"` | **P11** – Netherlands fourth operand |
| **TC12** | `("America", 130.0, 20.0)` | `C=F → D1=F → D2=F → AT=F → DE=F → FR=F → IT=F → ES=F → NL=F` → unavailable-country error → **early return** | `deliveryCost=0.00`<br>`totalCost=0.00`<br>`deliveryAvailable=false`<br>`message="Delivery to this country is not available"` | **P12** – no country matches |

### 7. Short-Circuit Evaluation and Infeasible Paths

**Short-circuit behavior:**

- For `discount < 0 || discount > cartValue`, the right operand is **not evaluated** when `discount < 0` is true (**P02**). It is evaluated when the left operand is false (**P03–P12**, where applicable).
- In the country condition, operands are checked in this order: **France → Italy → Spain → Netherlands**. After a true comparison, later comparisons are **not reached**. This creates four distinct paths for the four supported EU countries, even though their delivery costs and messages are identical.

**Examples of infeasible or unreachable theoretical paths:**

- `cartValue <= 0` is true **and** execution continues to discount validation: impossible because the function has already returned.
- `discount < 0` is true **and** `discount > cartValue` is evaluated: impossible because of `||` short-circuit evaluation.
- Austria matches **and** the Germany branch is evaluated: impossible because the `else if` chain skips later branches once an earlier one matches.
- Two distinct country-name comparisons are true for the same `country` string: impossible for the exact string comparisons used here.

These theoretical combinations are **not counted as feasible entry-to-exit paths**.

### 8. Path Coverage Calculation

| Measurement | Result |
|---|---:|
| Feasible execution paths identified | **12** |
| Test cases designed | **12** |
| Distinct feasible paths represented by designed tests | **12** |
| Paths not covered by the proposed test set | **0** |
| **Planned feasible path coverage** | **12 / 12 × 100 = 100%** |
| Tests compiled or executed | **0** |

Each test case covers **one different path** in this model. Therefore, each one contributes `1/12 ≈ 8.33 percentage points` toward the planned total. This is not a general rule: two test cases following the same path would not increase unique path coverage.

**Coverage statement:** The test design achieves **100% planned coverage of the 12 identified feasible paths** for the given source code and stated input assumptions. This does **not** mean that the function was executed or that all tests passed.

### 9. Risks, Limitations, and Conclusion

**Risks addressed by the design:** missing early-return behavior, incorrect delivery-cost choice, incorrect total-cost calculation, and failure to account for short-circuit evaluation.

**Limits:** Only `calculateDelivery()` was analyzed. `main()` is outside the task scope. No runtime results were collected. The tests are designed for ordinary finite numeric inputs; special floating-point values are not part of this test set.

**Conclusion:** From source-code inspection, I identified **12 feasible execution paths** and designed **12 test cases**, one for each path. The planned test set covers validation errors, the country-selection branches, short-circuit evaluation, and the normal and early returns.

### Learning Summary ###

I learned how to design tests using **Path Coverage**, a white-box testing technique. I first studied the source code and drew a control-flow diagram. Then I followed each route from the start of the function to a return statement.

The most important part for me was understanding **short-circuit evaluation** with `||`. Two inputs can produce the same result but still follow different execution paths. I also learned that an **early return** ends a path immediately, so later conditions are not evaluated.

I found **12 feasible paths** and designed one test case for each path. Based on the source code, this gives **100% planned path coverage**. I did not compile or execute the function, so this is a test-design result, not a test-execution result.
