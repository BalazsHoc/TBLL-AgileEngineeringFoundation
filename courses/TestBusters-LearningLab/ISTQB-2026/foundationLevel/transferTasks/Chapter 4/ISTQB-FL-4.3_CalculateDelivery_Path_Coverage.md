# Design Tests for 100% Path Coverage of `calculateDelivery()`

## Title

Design Tests for 100% Path Coverage of `calculateDelivery()`

## Learning Objective

Analyze a function’s control flow and design a test set that covers every feasible execution path through the function.

## Context

Review `calculateDelivery()` in [`deliveryCosts.c`](./deliveryCosts.c). The function validates cart and discount values, calculates the order value, selects delivery costs based on country, and returns a result.

Use the function’s source code to derive expected results. No separate business requirements are provided.

## Task Description

Without compiling or executing the code:

1. Draw or describe the control flow of `calculateDelivery()`, including its early returns and normal return.
2. Identify every feasible execution path from function entry to exit. Include the evaluation order and short-circuit behavior of the compound country condition using `||`.
3. Design test cases that collectively execute every feasible path at least once.
4. For each test case, record the inputs, the path taken, and the expected returned result.
5. Calculate the path coverage achieved. If you identify any infeasible paths, describe why they cannot occur.

## Expected Outcome

Submit a test-design table with these columns:

| Test Case ID | Inputs (`country`, `cartValue`, `discount`) | Executed Path | Expected Result | Coverage Goal |
|---|---|---|---|---|

Also include a brief control-flow outline and a coverage summary showing whether the test set achieves 100% of the feasible paths.

## Constraints

- Focus only on **path coverage** for `calculateDelivery()`. Do not substitute statement, branch, decision, or condition coverage as the objective.
- Do not use T1–T5 naming syntax.
- Do not modify or execute the source code.
- Derive expected results from the source code and state any assumptions.
- Keep the scope to `calculateDelivery()`; exclude `main()`.

## Hints

- Include paths that exit during input validation as well as paths that reach delivery selection and total-cost calculation.
- For the `||` country expression, account for which operands are reached before the expression becomes true—or becomes false.
- The function has no loops. Explain any path you consider infeasible rather than omitting it without justification.

## Estimated Duration

NA
