
# 1.2.2 - Perform a Lightweight Tool Selection for Toolshop Automation

## Reference to ISTQB Syllabus Chapter

ISTQB TAE – 1.2.2 Select Suitable Test Automation Tools For a Given System Under Test

## Link to the Transfer Task File

[ISTQB TAE 1.2.2 - Select Suitable Test Automation Tools](https://github.com/JulietaTz/RBI-AgileEngineeringFoundation/blob/main/courses/TestBusters-LearningLab/ISTQB-2026/testAutomationEngineer/transferTasks/ISTQB-TAE-1.2.2_Select_Suitable_Test_Automation_Tools_For_a_Given_SUT_20260405.md)

---

## Outcome

### 1. Objective

The goal of this task is to compare different test automation tools and select a suitable solution for Toolshop regression testing.

The team needs one tool for UI automation and one tool for API automation.

I compared different tools based on technical requirements, team skills, maintainability, CI integration and costs.

### 2. Toolshop Automation Needs

Toolshop is a web application with different workflows that can be tested through its user interface and APIs.

I identified the following automation needs based on the Toolshop scenario:

| Area | Automation Needs |
|---|---|
| UI Testing | Login, product search, product details, shopping cart and checkout |
| API Testing | REST API requests, response validation and error handling |
| Test Data | Test users, product data and controlled test data |
| Reporting | Test results, screenshots and information about failed tests |
| CI Execution | Automated regression tests in a CI pipeline |

These are initial automation needs. The actual API endpoints and CI configuration need to be verified before implementation.

### 3. Research and Evaluation Approach

I was not familiar with all the automation tools, so I started by researching their official documentation.

First, I identified the main automation requirements for Toolshop.

Then I selected three UI automation tools and two API automation tools for comparison.

For UI automation, I selected:
- Playwright
- Cypress
- Selenium WebDriver

For API automation, I selected:
- Playwright API Testing
- Postman with Newman/Postman CLI

I compared the tools using the same six criteria and assigned scores from 1 to 5.

The evaluation is based on documented features and an assumed JavaScript/TypeScript-oriented team.

The scores represent an initial assessment, not the results of practical benchmark tests.

### 4. Selection Criteria

| Criterion | Description |
|---|---|
| Language Fit | Does the tool support the programming language used by the team? |
| CI Integration | Can tests run automatically in a CI pipeline? |
| Maintainability | How easy is it to update and maintain automated tests? |
| Learning Curve | How difficult is it for the team to learn the tool? |
| Debugging Support | Does the tool help identify and analyze test failures? |
| Cost / License | Can the tool be used without high additional costs? |

**Scoring:**

- 1 = Poor
- 2 = Below average
- 3 = Acceptable
- 4 = Good
- 5 = Very good

All criteria have equal weight.

The maximum score is 30 points per tool.

### 5. UI Automation Tool Comparison

I compared Playwright, Cypress and Selenium WebDriver.

| Criterion | Playwright | Cypress | Selenium |
|---|---:|---:|---:|
| Language Fit | 5 | 5 | 4 |
| CI Integration | 5 | 4 | 5 |
| Maintainability | 5 | 4 | 3 |
| Learning Curve | 4 | 5 | 3 |
| Debugging Support | 5 | 5 | 4 |
| Cost / License | 5 | 4 | 5 |
| **Total** | **29/30** | **27/30** | **24/30** |

#### Playwright

Advantages:
- Supports JavaScript and TypeScript.
- Supports Chromium, Firefox and WebKit.
- Provides screenshots, tracing and debugging tools.
- Supports automatic waiting for UI elements.
- Can run tests in CI pipelines.
- Can also be used for API testing.

Disadvantages:
- Requires programming knowledge.
- The team needs time to learn the framework.

#### Cypress

Advantages:
- Easy to start with.
- Provides an interactive test runner.
- Good debugging features.
- Supports JavaScript and TypeScript.
- Can run tests in CI pipelines.

Disadvantages:
- Some advanced cloud features require a paid plan.
- Browser and multi-tab testing have some limitations compared with Playwright.

#### Selenium WebDriver

Advantages:
- Supports different programming languages, including Java, Python and JavaScript.
- Supports different browsers.
- Widely used in test automation.
- Free and open source.

Disadvantages:
- Requires more framework setup and configuration.
- Reporting and other features often need additional libraries.
- Can be more difficult for beginners.

**UI Selection Result:**

Playwright received the highest score with 29 out of 30 points.

I selected Playwright because it provides good browser support, useful debugging features and CI integration.

It is also suitable for a team working with JavaScript or TypeScript.

### 6. API Automation Tool Comparison

I compared Playwright API Testing and Postman with Newman/Postman CLI.

| Criterion | Playwright API | Postman + CLI |
|---|---:|---:|
| Language Fit | 5 | 5 |
| CI Integration | 5 | 4 |
| Maintainability | 5 | 4 |
| Learning Curve | 4 | 5 |
| Debugging Support | 4 | 5 |
| Cost / License | 5 | 4 |
| **Total** | **28/30** | **27/30** |

#### Playwright API Testing

Advantages:
- Supports HTTP requests and response validation.
- Uses JavaScript or TypeScript.
- Can share configuration with UI tests.
- Supports CI execution.
- UI and API tests can be maintained in one project.
- Free and open source.

Disadvantages:
- Requires programming knowledge.
- Does not provide the same graphical API exploration interface as Postman.

#### Postman with Newman/Postman CLI

Advantages:
- Easy to use for manual API testing.
- Provides a graphical interface.
- Supports API collections and automated checks.
- Collections can be executed from the command line.
- Useful for exploring and understanding APIs.

Disadvantages:
- Some collaboration and cloud features require paid plans.
- Using it together with a separate UI framework means maintaining two different tools.

**API Selection Result:**

Playwright API Testing received the highest score with 28 out of 30 points.

I selected Playwright API Testing because the team can use the same framework and programming language for UI and API automation.

### 7. Final Recommendation

Based on the comparison, I recommend the following automation stack for Toolshop:

| Area | Selected Tool |
|---|---|
| UI Automation | Playwright |
| API Automation | Playwright API Testing |
| Programming Language | TypeScript |
| Reporting | Playwright HTML Reporter |
| CI Execution | Playwright CLI in the team's CI pipeline |

**Reasons for the selection:**

1. The same programming language can be used for UI and API automation.
2. UI and API tests can be maintained in one project.
3. Playwright provides useful debugging and reporting features.
4. Automated tests can be integrated into a CI pipeline.
5. The framework is open source and does not require a paid license.
6. Using one framework can reduce the number of tools the team needs to maintain.

### 8. Risks and Mitigations

| Risk | Mitigation |
|---|---|
| Team members may have limited experience with Playwright. | Start with simple tests, provide short training sessions and use code reviews. |
| UI tests may become unstable because of dynamic elements or changing test data. | Use stable locators, Playwright auto-waiting and controlled test data. |

### 9. Trade-offs

Playwright received the highest score in my evaluation, but it is not necessarily the best solution for every team.

Cypress may be easier for beginners because of its interactive test runner.

Selenium may be a better choice for teams with strong Java experience or an existing Selenium framework.

Postman may be more convenient for manual API exploration and collaboration with team members who do not write code.

For Toolshop, I prefer Playwright because it provides a consistent solution for UI and API automation.

The selection should be validated with a small proof of concept before implementing a larger regression test suite.

### 10. Sources

I used the following official documentation for the tool comparison:

- [Playwright Documentation](https://playwright.dev/docs/intro)
- [Playwright API Testing](https://playwright.dev/docs/api-testing)
- [Playwright CI](https://playwright.dev/docs/ci)
- [Cypress Documentation](https://docs.cypress.io/)
- [Selenium Documentation](https://www.selenium.dev/documentation/)
- [Postman Documentation](https://learning.postman.com/docs/)
- [Newman](https://github.com/postmanlabs/newman)
- [Toolshop](https://practicesoftwaretesting.com/)

### Learning Summary

| Concept | What I Learned |
|---|---|
| Tool Selection | The best tool depends on project requirements and team skills. |
| Research | I can compare unfamiliar tools using official documentation. |
| Evaluation Criteria | A scoring table makes the selection more structured and transparent. |
| Maintainability | Tests should be easy to update and maintain. |
| CI Integration | Automated tests should be able to run in a CI pipeline. |
| Trade-offs | Every tool has advantages and disadvantages. |
| Risk Management | Potential risks should be identified together with possible solutions. |

**Conclusion**

In this task, I learned that selecting a test automation tool is not only about its technical features.

Team experience, maintainability, CI integration, debugging support and costs are also important.

I also learned how to research tools that I have not used before and compare them using clear criteria.

Based on my initial evaluation, I selected Playwright for both UI and API automation.

The next step would be to create a small proof of concept to check whether this solution works well for Toolshop.
