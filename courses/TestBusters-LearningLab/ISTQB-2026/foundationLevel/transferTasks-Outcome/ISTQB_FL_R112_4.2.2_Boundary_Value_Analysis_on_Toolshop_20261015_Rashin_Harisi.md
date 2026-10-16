# Apply Boundary Value Analysis on Toolshop

## Syllabus Reference
ISTQB Foundation Level – **4.2.2 Boundary Value Analysis (BVA)**

## Transfer Task
**Task:** [Apply Boundary Value Analysis on Toolshop](https://github.com/rgroetz2/TBLL-AgileEngineeringFoundation/blob/main/courses/TestBusters-LearningLab/ISTQB-2026/foundationLevel/transferTasks/Chapter%204/ISTQB-FL-4.2.2_Boundary_Value_Analysis_20260405.md)

**System Under Test:** [Toolshop](https://practicesoftwaretesting.com/) 

**Documentation:** [Toolshop documentation](https://github.com/testsmith-io/practice-software-testing/tree/main/docs) 

**Target release:** Sprint 5  

## Outcome

### 1. Objective and Scope

Apply two-value and three-value Boundary Value Analysis to **one field: the product search query**.

### 2. Requirement and Assumptions

**AC4 – Search (Sprint 5):** A valid search query contains **3–40 characters**. Submitting a valid query updates the product grid to show matching products and resets active filters.

**Requirement reference:** [AC4-Search](https://github.com/testsmith-io/practice-software-testing/blob/main/docs/user-stories/v5.md#ac4--search)

**Assumptions / interpretation:**
- Input length is counted in characters for the ASCII test data used below.
- Lengths **3 through 40**, inclusive, are valid; **2** and **41** are invalid.
- The acceptance criterion does **not** explicitly require an error message for invalid input. Do not mark a test as failed solely because no error message appears.
- For a valid query with no matching products, an empty result is acceptable **if the search is actually submitted**.
- Each test starts from a freshly loaded product overview page to avoid interference from earlier searches or filters.

### 3. Boundary Identification

| Boundary | Invalid side | Boundary value | Valid side |
|---|---:|---:|---:|
| Minimum valid length = 3 | 2 | 3 | 4 |
| Maximum valid length = 40 | 41 | 40 | 39 |

**Two-value BVA:** `2, 3, 40, 41` → **4 tests**.  
**Three-value BVA:** `2, 3, 4, 39, 40, 41` → **6 tests**.  
**Nominal check:** `20` → **1 additional test**, not counted as a boundary test.

The four two-value tests are a subset of the six three-value tests. The full planned set contains **7 unique tests**, not 4 + 6 + 1 separate executions.

### 4. Boundary Test Design

To isolate the **input-length boundary**, all inputs use repeated lowercase `a` characters. No product matches are assumed; the observed submission behavior must be recorded during execution.

| Test ID | Boundary condition | Input | Length | Two-value BVA | Three-value BVA | Expected result |
|---|---|---|---:|:---:|:---:|---|
| TC-BVA-01 | Just below minimum | `aa` | 2 | Yes | Yes | Invalid-length query is not submitted as a valid search |
| TC-BVA-02 | Minimum | `aaa` | 3 | Yes | Yes | Search is submitted; product grid reflects search results |
| TC-BVA-03 | Just above minimum | `aaaa` | 4 | No | Yes | Search is submitted; product grid reflects search results |
| TC-BVA-04 | Nominal | `aaaaaaaaaaaaaaaaaaaa` | 20 | Additional | Additional | Search is submitted; product grid reflects search results |
| TC-BVA-05 | Just below maximum | `aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa` | 39 | No | Yes | Search is submitted; product grid reflects search results |
| TC-BVA-06 | Maximum | `aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa` | 40 | Yes | Yes | Search is submitted; product grid reflects search results |
| TC-BVA-07 | Just above maximum | `aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa` | 41 | Yes | Yes | Invalid-length query is not submitted as a valid search |

**Note:** The expected results for invalid input describe the intended valid-query restriction in AC4; the AC does not specify exactly how invalid input must be handled. If the application behaves differently, record the observation and raise a requirement clarification before labeling it a confirmed defect.

### 5. Execution Procedure

For each test case:

1. Open or refresh [Toolshop](https://practicesoftwaretesting.com/) to start from a clean product overview.
2. Enter the exact input from the table into the Search field.
3. Submit the search using the Search control.
4. Observe whether the search was submitted, whether the product grid changed, and whether any feedback appeared.
5. Record the actual behavior and status in the execution log below.

### 6. Test Execution Log

**Execution status:** Completed.

| Test ID | Length | Expected result (summary) | Actual result | Status | Evidence / Notes |
|---|---:|---|---|---|---|
| TC-BVA-01 | 2 | Invalid-length query not submitted as valid | Clicking Search had no effect; no search was submitted | PASS | Observed manually |
| TC-BVA-02 | 3 | Search submitted | Search submitted; no matching products found | PASS | Observed manually |
| TC-BVA-03 | 4 | Search submitted | Search submitted; no matching products found | PASS | Observed manually |
| TC-BVA-04 | 20 | Search submitted | Search submitted; no matching products found | PASS | Observed manually |
| TC-BVA-05 | 39 | Search submitted | Search submitted; no matching products found | PASS | Observed manually |
| TC-BVA-06 | 40 | Search submitted | Search submitted; no matching products found | PASS | Observed manually |
| TC-BVA-07 | 41 | Invalid-length query not submitted as valid | Clicking Search had no effect; no search was submitted | PASS | Observed manually |

**Execution summary:** **7 / 7 executed; 7 PASS; 0 FAIL.** The five valid-length searches returned no matching products, while the two invalid-length searches were not submitted.  
**Task minimum:** Execute at least **4** tests.

### 7. Coverage and Technique Comparison

| Technique | Planned boundary values | Number of unique boundary tests | Executed | Coverage |
|---|---|---:|---:|---|
| Two-value BVA | 2, 3, 40, 41 | 4 | 4 | 4 / 4 = 100% |
| Three-value BVA | 2, 3, 4, 39, 40, 41 | 6 | 6 | 6 / 6 = 100% |
| Additional nominal check | 20 | 1 | 1 | 1 / 1 = 100% |

**Comparison:** Two-value BVA is faster and needs four boundary tests. Three-value BVA adds the two valid-side adjacent values (`4` and `39`), giving more thorough boundary coverage at the cost of two extra executions. The nominal check is useful for a typical valid input but is not itself a boundary value.

**Coverage interpretation:** These percentages describe execution coverage of the planned BVA test values, **not defect-detection effectiveness**.

### 8. Risk, Quality Impact, and Follow-up

**Risks addressed:**
- Off-by-one errors around the minimum (3) and maximum (40) search-query lengths.
- Incorrect acceptance or rejection of search queries.
- Unexpected search behavior at boundary values.

**Quality impact:**

All seven test cases passed. The application accepted valid search-query lengths and did not execute searches with invalid lengths. No boundary-related defects were observed.

**Follow-up:**

No bug report is required based on the observed results. Search-result accuracy and filter-reset behavior were not tested in this BVA task.

### Learning Summary ###

I used Boundary Value Analysis to design tests around the minimum and maximum valid search-query lengths. I compared **two-value BVA (4 boundary tests)** with **three-value BVA (6 boundary tests)** and added a nominal valid input as an extra check.

I learned that the two-value tests are included in the three-value test set, so both techniques can be compared without duplicating executions. Three-value BVA tests the values immediately inside the valid range and can provide greater confidence, although it requires more test cases.

**Execution learning:** I observed that the application accepted search queries of 3, 4, 20, 39, and 40 characters, even though none returned matching products. Queries of 2 and 41 characters did not trigger a search. This helped me distinguish **successful search submission** from **finding matching products**. All planned boundary and nominal values were executed; no off-by-one issue was observed at the tested length limits.