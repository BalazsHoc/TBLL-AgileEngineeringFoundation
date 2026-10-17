# Apply State Transition Testing on Toolshop

## 1. Title
Apply State Transition Testing on Toolshop

## 2. Syllabus Reference
ISTQB FL – 4.2.4 State Transition Testing

## 3. Learning Objective
Apply ISTQB FL section 4.2.4 (State Transition Testing) in a realistic webshop testing situation. Produce one concrete testing artifact that can be used by the Scrum team in the current sprint.

## 4. Context / Scenario
Your Scrum team is preparing the next Toolshop increment at https://practicesoftwaretesting.com/. During sprint refinement, you are asked to apply this syllabus concept to reduce risk before release. Use the Toolshop documentation in https://github.com/testsmith-io/practice-software-testing/tree/main/docs and align with released version sprint5 when needed.

## 5. Task Instructions

1. Read the user story and acceptance criteria in `user-login-ISTQBFL.md`. Use that story as the source of truth; do not invent additional behavior.
2. Identify the login feature’s states, events, conditions, and state-changing actions. 
3. Create a state transition table (100% path coverage) with these columns:
   - Current state
   - Event or input
   - Condition or guard
   - Expected action or result
   - Next state
   - Requirement reference
4. Derive test scenarios from the table. Include at least:
   - A valid login from `ENABLED`.
   - Three consecutive incorrect login attempts, verifying that the account becomes `LOCKED` on the third attempt.
   - A login attempt while `LOCKED`, including an attempt with correct credentials.
   - An administrator enabling a `LOCKED` account, followed by a login attempt.
   - A login attempt with correct credentials while `DISABLED`.
5. Cover valid and invalid transition sequences. Identify transitions the story does not define, and record them as questions or assumptions for the product owner rather than deciding their behavior.
6. Categorize each scenario. Give each scenario a readable name.
7. Document the following for each test scenario:
   - Test Title
   - Requirement Reference
   - Assumptions
   - Objective
   - Preconditions
   - Test Data
   - Expected Result

**Requirement gap to capture:** The story says a `DISABLED` user cannot log in, but does not specify how a disabled account can be enabled. Do not assume an administrator can enable it unless that behavior is confirmed.

## 6. Expected Outcome / Deliverable
A state model and a set of test cases.

## 7. Timebox
30 minutes

## 8. Hints (Optional)
- Keep scope narrow: one feature flow is enough.
- If documentation is unclear, state assumptions explicitly in your artifact.
- Use screenshots only if they speed up communication; concise textual evidence is sufficient.
