# Apply Test Levels and Test Types on Toolshop

## Reference to ISTQB Syllabus Chapter

ISTQB Foundation Level – 2.2 Test Levels and Test Types

- 2.2.1 Test Levels
- 2.2.2 Test Types

## Link to the Transfer Task File

https://github.com/rgroetz2/TBLL-AgileEngineeringFoundation/blob/main/courses/TestBusters-LearningLab/ISTQB-2026/foundationLevel/transferTasks/Chapter%202/ISTQB-FL-2.2_Test_Levels_and_Test_Types_20260405.md

## Outcome

### 1. Test Objective

I applied the ISTQB test levels and test types to a real feature in Toolshop.

I selected the product search and shopping cart functionality.

My goal was to check whether a customer can search for a product, open the product details, and add the product to the shopping cart.

### 2. Test Environment

| Item | Description |
|---|---|
| Application | Toolshop |
| URL | https://practicesoftwaretesting.com/ |
| Version | Sprint 5 |
| Test Date | 22.10.2026 |
| Test Type | Functional Testing |
| Test Level | System Testing |
| Browser | Firefox Desktop |
| Test Approach | Black-box Testing |
| Test Execution | Manual |
| Test Product | Thor Hammer |
| Test Status | PASSED |

### 3. Feature Under Test

**Feature:** Product Search → Product Detail Page → Add to Cart

**Product:** Thor Hammer

**Expected Behavior:**

- The customer can search for a product.
- The search results show the matching product.
- The customer can open the product detail page.
- The customer can add the product to the shopping cart.
- The shopping cart shows the selected product with the correct quantity and price.

**Documentation:**

https://github.com/testsmith-io/practice-software-testing/tree/main/docs

The expected behavior was used as the basis for my manual test.

### 4. Test Levels

I identified the five ISTQB test levels and applied them to the selected feature.

| Test Level | Test Objective | Status |
|---|---|---|
| Component Testing | Check if the cart calculates the quantity correctly. | Not Executed |
| Component Integration Testing | Check if the product detail component works correctly with the cart component. | Not Executed |
| System Testing | Check the complete flow from product search to shopping cart. | PASSED |
| System Integration Testing | Check the communication between the frontend and backend API. | Not Executed |
| Acceptance Testing | Check if customers can find a product and add it to the cart as expected. | Not Executed |

**My focus was System Testing.**

I tested the complete feature through the user interface.

The other test levels were included to show where additional testing could be performed.

### 5. Test Types

I identified the following test types for this feature.

| Test Type | Test Objective | Status |
|---|---|---|
| Functional Testing | Check if the product search and Add to Cart functionality work correctly. | PASSED |
| Non-functional Testing | Check usability, performance, and accessibility. | Not Executed |
| Black-box Testing | Check the functionality without looking at the source code. | PASSED |
| White-box Testing | Check the internal code and logic of the cart. | Not Executed |

I performed Functional Testing using a Black-box approach.

I checked the visible behavior of the application without examining the source code.

### 6. Test Case Execution

**Test Case ID:** TC-CART-001

**Title:** Search for Thor Hammer and add it to the shopping cart

**Test Level:** System Testing

**Test Type:** Functional Testing

**Test Approach:** Black-box Testing

**Preconditions:**

- Toolshop is accessible.
- The product Thor Hammer is available.
- The shopping cart is empty.

**Test Data:**

- Search term: Thor Hammer
- Product: Thor Hammer
- Quantity: 1

#### Test Steps and Results

| Step | Test Action | Expected Result | Actual Result | Status |
|---|---|---|---|---|
| 1 | Open Toolshop. | Homepage is displayed. | Homepage opened successfully. | PASS |
| 2 | Search for "Thor Hammer". | Matching product is displayed. | Thor Hammer was found. | PASS |
| 3 | Open the product detail page. | Product details are displayed. | Product detail page opened correctly. | PASS |
| 4 | Click "Add to Cart". | Product is added to the cart. | Thor Hammer was added successfully. | PASS |
| 5 | Open the shopping cart. | Thor Hammer is displayed with the correct quantity and price. | Product, quantity and price were displayed correctly. | PASS |

**Overall Test Result: PASSED**

All five steps worked as expected.

No defects were found during this test.

### 7. Test Evidence

I saved three screenshots to document the test execution.

**Screenshot 1 – Product Search**

The search results show the product Thor Hammer.

![Thor Hammer Search](images/FL_2.2_J120_screenshots/Thor_hammer_search.png)

**Screenshot 2 – Product Detail Page**

The product detail page shows the product information and the Add to Cart button.

![Thor Hammer PDP](images/FL_2.2_J120_screenshots/Thor_hammer_PDP.png)

**Screenshot 3 – Shopping Cart**

The shopping cart shows the selected product after adding it.

![Shopping Cart](images/FL_2.2_J120_screenshots/Shopping_card_view.png)

### 8. Risks and Quality Impact

I identified the following possible risks for this feature.

| Risk | Quality Impact |
|---|---|
| Product is not found in search results. | Customers cannot find the product. |
| Product detail page does not open. | Customers cannot view product information. |
| Add to Cart button does not work. | Customers cannot add products to the cart. |
| Incorrect quantity in the cart. | Customers may order the wrong quantity. |
| Incorrect product price. | Customers may see an incorrect total price. |

**Observation:**

During my test with Thor Hammer, I did not find any of these problems.

The tested functionality worked as expected.

### 9. Test Summary

| Item | Result |
|---|---|
| Test Cases Executed | 1 |
| Passed | 1 |
| Failed | 0 |
| Defects Found | 0 |
| Screenshots | 3 |
| Overall Status | PASSED |

The test confirmed that the selected product search and Add to Cart flow worked correctly.

The test covered one product and one quantity. Other products and quantities were not part of this test.

### Learning Summary

| Concept | What I Learned |
|---|---|
| Component Testing | Tests individual components. |
| Component Integration Testing | Tests how components work together. |
| System Testing | Tests the complete application or feature. |
| System Integration Testing | Tests communication with other systems. |
| Acceptance Testing | Checks if the system meets user and business needs. |
| Functional Testing | Checks what the system does. |
| Non-functional Testing | Checks how well the system works. |
| Black-box Testing | Tests functionality without looking at the code. |
| White-box Testing | Tests the internal code and structure. |

### Conclusion

In this task, I learned the difference between test levels and test types.

Test levels describe where testing takes place. Test types describe what is being tested.

I applied System Testing and Functional Testing using a Black-box approach.

I tested the complete flow from searching for Thor Hammer to adding it to the shopping cart.

All test steps passed, and I did not find any defects.

I also learned that the same feature can be tested at different test levels to find different types of problems.