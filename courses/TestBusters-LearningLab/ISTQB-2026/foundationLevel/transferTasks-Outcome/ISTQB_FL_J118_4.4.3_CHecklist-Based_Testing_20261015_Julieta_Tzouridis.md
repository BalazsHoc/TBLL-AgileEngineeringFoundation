
# Apply Checklist-Based Testing on Toolshop

## Reference to ISTQB Syllabus chapter

ISTQB Foundation Level – 4.4.3 Checklist-Based Testing

## Link to the transfer task file

[ISTQB-FL-4.4.3 – Apply Checklist-Based Testing on Toolshop](https://github.com/JulietaTz/RBI-AgileEngineeringFoundation/blob/main/courses/TestBusters-LearningLab/ISTQB-2026/foundationLevel/transferTasks/Chapter%204/ISTQB-FL-4.4.3_Checklist_Based_Testing_20260405.md)

## Outcome

### 1. Test Objective

Apply **checklist-based testing** to the Product Search feature in Toolshop to evaluate selected functional and usability-related quality aspects.

The objective is to identify potential defects and product risks using a structured checklist and document the results as a sprint-ready testing artifact.

### 2. Test Context

| Item | Description |
|---|---|
| Application | [Toolshop](https://practicesoftwaretesting.com/) |
| Feature / Page | Product Search / Product Listing |
| ISTQB Reference | FL 4.4.3 – Checklist-Based Testing |
| Test Technique | Experience-based: Checklist-Based Testing |
| Test Level | System Testing |
| Test Focus | Functional behavior and selected usability aspects |
| Execution Type | Manual |
| Execution Date | 2026-10-15 |
| Test Environment | Desktop – Web Application |
| Operating System | Windows |
| Browser | Mozilla Firefox |
| Application Reference | Hosted Sprint 5 application |
| Timebox | 30 minutes |
| Execution Status | Completed |
| Overall Result | **8 Pass / 0 Fail / 0 Blocked**; 1 open question |

### 3. Test Basis and Assumptions

**Sources:**

- [ISTQB Foundation Level Syllabus](https://www.istqb.org/certifications/certified-tester-foundation-level/)
- [Toolshop Documentation](https://github.com/testsmith-io/practice-software-testing/tree/main/docs)
- [Toolshop Release Notes](https://github.com/testsmith-io/practice-software-testing/releases)

**Documented behavior / reference:**

The Toolshop release history includes an improvement for displaying the number of product search results.

This observable behavior was included in the checklist.

**Additional test expectations (assumptions):**

- An existing product keyword returns relevant products.
- A search with no matches provides understandable feedback.
- Search results show readable product information.
- Users can navigate from search results to product details.
- Uppercase and lowercase search terms return equivalent results.
- Leading and trailing spaces do not prevent relevant search results.
- An empty search does not cause an application error.

These expectations are used for testing but are not all independently verified acceptance criteria.

The intended behavior for an empty search remains an open question.

### 4. Test Approach

Checklist-based testing is an **experience-based test technique**.

The checklist was created based on:

- Knowledge of typical search functionality
- Common functional defects
- Usability expectations
- Potential product risks

Unlike fully scripted test cases, checklist items define what should be checked while allowing flexibility during execution.

**Scope:**

Product Search on the Toolshop product listing page, including navigation to a product detail page.

**Out of Scope:**

- Checkout and login
- Cross-browser testing
- Mobile testing
- Performance testing
- Security testing
- Systematic accessibility testing

### 5. Test Checklist and Results

| ID | Checklist Item | Test Data / Action | Result | Evidence |
|---|---|---|---|---|
| CL-01 | Search field is visible and usable | Open product listing page | **Pass** | [Screenshot](images/FL_J118_scrteenshots/CL-01_Search_Field_Availability.png) |
| CL-02 | Existing product search returns relevant results | `hammer` | **Pass** | [Screenshot](images/FL_J118_scrteenshots/CL-02-search-hammer.png) |
| CL-03 | Non-existing product search shows understandable feedback | `xyz123notfound` | **Pass** | [Screenshot](images/FL_J118_scrteenshots/CL-03-search-xyz123notfound.png) |
| CL-04 | Empty search is handled without an application error | Empty search field; click Search | **Pass*** | [Screenshot](images/FL_J118_scrteenshots/CL-04_empty_search.png) |
| CL-05 | Search gives equivalent results for case variants | `hammer`, `HAMMER` | **Pass** | [Screenshot](images/FL_J118_scrteenshots/CL-05_search-HAMMER.png) |
| CL-06 | Leading and trailing spaces do not prevent relevant results | ` hammer ` | **Pass** | Manual observation |
| CL-07 | Result cards show readable product information | Search `Hammer` | **Pass** | [Screenshot](images/FL_J118_scrteenshots/CL-07-search_Hammer.png) |
| CL-08 | A product can be opened from search results | Open `Hammer` | **Pass** | [Screenshot](images/FL_J118_scrteenshots/CL-08_open_Hammer.png) |

**CL-04 clarification:**

The application did not visibly react when an empty search was submitted.

The check passed against the limited expectation that no application error occurs.

Whether a validation message or another action is required remains an open question.

### 6. Test Execution and Observations

#### CL-01 – Search Field Availability

**Steps:**
1. Open Toolshop.
2. Locate the Search field on the product listing page.

**Input:** None.

**Expected Result:**
The search field is visible and accepts text input.

**Actual Result:**
The search field was visible and usable.

**Status:** Pass

**Evidence:** [CL-01 – Search Field Availability](images/FL_J118_scrteenshots/CL-01_Search_Field_Availability.png)

---

#### CL-02 – Search for Existing Product

**Steps:**
1. Enter `hammer`.
2. Click Search.

**Input:** `hammer`

**Expected Result:**
Matching products are displayed with relevant product information.

**Actual Result:**
- Six matching products were displayed.
- The application showed `6 products found for 'hammer'`.
- Product names, images, and prices were visible.

**Status:** Pass

**Evidence:** [CL-02 – Search for hammer](images/FL_J118_scrteenshots/CL-02-search-hammer.png)

---

#### CL-03 – Search for Non-Existing Product

**Steps:**
1. Enter `xyz123notfound`.
2. Click Search.

**Input:** `xyz123notfound`

**Expected Result:**
No unrelated products are displayed, and the user receives understandable feedback.

**Actual Result:**
- The application displayed `0 products found`.
- The message `There are no products found.` was displayed.
- No unrelated products appeared.

**Status:** Pass

**Evidence:** [CL-03 – No Search Results](images/FL_J118_scrteenshots/CL-03-search-xyz123notfound.png)

---

#### CL-04 – Empty Search

**Steps:**
1. Clear the search field.
2. Click Search without entering a search term.

**Input:** Empty string.

**Expected Result:**
The application handles empty input without an error.

The specific expected behavior is not clearly defined in the available test basis.

**Actual Result:**
- No visible reaction occurred.
- No error message was displayed.
- The page remained unchanged.

**Status:** Pass with open question

**Open Question:**

Should the application ignore empty input, display a validation message, or reset the product list?

**Risk / Quality Impact:**

The absence of visible feedback may create usability uncertainty because users cannot tell whether the search action was processed.

**Evidence:** [CL-04 – Empty Search](images/FL_J118_scrteenshots/CL-04_empty_search.png)

---

#### CL-05 – Uppercase and Lowercase Search

**Steps:**
1. Search for `hammer`.
2. Search for `HAMMER`.
3. Compare the results.

**Input:** `hammer`, `HAMMER`

**Expected Result:**
Both searches return equivalent matching products.

**Actual Result:**
- `hammer` returned six products.
- `HAMMER` returned six products.
- Both searches displayed the same matching products.

**Status:** Pass

**Evidence:**
- [CL-02 – Lowercase Search](images/FL_J118_scrteenshots/CL-02-search-hammer.png)
- [CL-05 – Uppercase Search](images/FL_J118_scrteenshots/CL-05_search-HAMMER.png)

---

#### CL-06 – Leading and Trailing Spaces

**Steps:**
1. Enter ` hammer `.
2. Click Search.
3. Compare the results with `hammer`.

**Input:** ` hammer `

**Expected Result:**
Leading and trailing spaces do not prevent relevant search results.

**Actual Result:**
The search handled the input successfully during manual execution.

**Status:** Pass

**Evidence:** Manual execution confirmation.

---

#### CL-07 – Product Information Display

**Steps:**
1. Search for `Hammer`.
2. Inspect the search results.

**Input:** `Hammer`

**Expected Result:**
Product names, images, and prices are displayed correctly and are readable.

**Actual Result:**
- Six product cards were displayed.
- Product names were readable.
- Product images were displayed.
- Product prices were visible.
- Results were presented in a structured layout.

**Status:** Pass

**Evidence:** [CL-07 – Product Search Results](images/FL_J118_scrteenshots/CL-07-search_Hammer.png)

---

#### CL-08 – Open Product Details

**Steps:**
1. Search for `hammer`.
2. Select the product `Hammer`.

**Input:** Select the Hammer product.

**Expected Result:**
The selected product detail page opens with relevant product information.

**Actual Result:**
- The Hammer product detail page opened successfully.
- The product name, image, and price were displayed.
- The product description and specifications were available.
- Quantity selection and Add to Cart controls were visible.

**Status:** Pass

**Evidence:** [CL-08 – Hammer Product Details](images/FL_J118_scrteenshots/CL-08_open_Hammer.png)

### 7. Test Execution Summary

All eight checklist items were manually executed on October 15, 2026, using Mozilla Firefox on a Windows desktop computer.

| Metric | Result |
|---|---|
| Total Checklist Items | 8 |
| Executed | 8 |
| Passed | 8 |
| Failed | 0 |
| Blocked | 0 |
| Not Run | 0 |
| Pass Rate | **100% (8/8)** |
| Confirmed Defects | 0 |
| Open Questions | 1 (CL-04) |

**Overall Test Result: PASS**

All eight checks passed against their stated expectations.

No confirmed defects were identified within the tested scope.

The expected behavior for an empty search requires clarification.

### 8. Risk and Quality Assessment

| ID / Area | Observation / Risk | Quality Impact | Follow-up |
|---|---|---|---|
| CL-04 | Empty search produces no visible response | Users may not understand whether the action was processed | Clarify expected behavior with the Product Owner |
| Browser Compatibility | Only Mozilla Firefox on desktop was tested | Behavior in other browsers is unknown | Consider cross-browser tests |
| Mobile Responsiveness | Mobile devices were not tested | Mobile usability remains unverified | Include responsive testing in a future cycle |
| Non-functional Quality | Performance, security, and accessibility were not systematically tested | Related risks remain unassessed | Evaluate based on sprint priorities |

**Defect Decision:**

No bug report was created for CL-04 because the intended behavior has not been confirmed.

If an acceptance criterion requires visible feedback or another action, the observation should be reassessed as a potential defect.

### 9. Sprint-Ready Summary

**Feature:** Product Search

**Technique:** Checklist-Based Testing

**Execution Date:** 2026-10-15

**Test Environment:** Windows Desktop / Mozilla Firefox

**Execution Status:** Completed

**Results:**
- 8 checklist items executed
- 8 passed
- 0 failed
- 0 confirmed defects
- 1 open requirement question

**Quality Assessment:**

The Product Search functionality behaved as expected for the selected checks.

**Sprint Recommendation:**

No confirmed blocking issues were identified within the tested scope.

The intended behavior of an empty search should be clarified with the Product Owner.

**Daily Stand-up Update:**

> I completed checklist-based testing for Toolshop Product Search.
> All eight checks passed, including existing and non-existing search terms,
> case variations, product information, and product navigation.
> No defects were confirmed.
> One question remains: an empty search produces no visible response,
> so the expected behavior should be clarified with the Product Owner.

### 10. Learning Summary

| Concept | One-line Takeaway |
|---|---|
| Checklist-Based Testing | An experience-based technique that guides testing through a structured checklist. |
| Checklist Items | Define what should be checked without requiring detailed test scripts. |
| Test Coverage | Helps systematically evaluate relevant functional and usability risks. |
| Flexibility | Allows testers to adapt their checks based on observations. |
| Defect Detection | Supports identification of common defects and unexpected behavior. |
| Test Evidence | Screenshots and documented results improve traceability and reproducibility. |
| Expected vs. Actual | Observed behavior must be compared with requirements before confirming a defect. |
| Open Questions | Unclear expected behavior should be documented and clarified. |
| Checklist Maintenance | Checklists should be refined based on new defects, risks, and experience. |

### 11. Conclusion

Checklist-based testing was successfully applied to the Product Search functionality in Toolshop.

Eight checklist items were created and manually executed on **October 15, 2026**, using **Mozilla Firefox on a Windows desktop computer**.

All **eight checks passed**, and no confirmed defects were identified within the tested scope.

One open question remains regarding the expected behavior of an empty search.

The technique provided a structured but flexible approach to evaluating search functionality, usability, and product navigation.

**Key Learning:**

Checklist-based testing helps testers systematically evaluate important quality aspects without requiring detailed test cases for every check.

Documenting actual results, evidence, assumptions, and open questions improves communication with the Scrum team and supports risk-based decisions during the sprint.
