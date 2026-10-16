# Holistic Test Automation with AI

## Course Outline

### Audience and Purpose

For AI Green Belt graduates working as Product Owners, Scrum Masters, Business Analysts, Agile Coaches, testers, or developers. The course develops the ability to make risk-based testing and automation decisions and to implement a basic test automation strategy supported with AI. It assumes no prior programming experience.

### Overall Learning Outcomes

By the end of the course, participants will be able to:

1. Map testing activities across the Holistic Testing areas of Discover, Plan, Understand, Build, Deploy, Release, Observe, and Learn.
2. Identify product quality risks and use them to prioritize testing and automation.
3. Compare manual testing, deterministic automation, AI prompting, reusable AI skills, and agentic workflows for a testing need.
4. Validate AI-supported testing outputs and explain their limitations and required human oversight.
5. Design a basic automation strategy and implement at least one automated check or component.
6. Present evidence-based release-readiness conclusions and improvement actions for the ToolShop Czech Market Expansion case study.

### Delivery Shape

Three modules, each scheduled over three calendar days: travel during the first half of day 1, two teaching days, and travel during the second half of day 3. There are four weeks of workplace application between modules. Each lesson is 50 minutes, followed by a 10-minute break.

| Version | Lessons per module (days 1/2/3) | Core lessons | Lesson time | Emphasis |
|---|---:|---:|---:|---|
| Compact | 2 / 4 / 2 | 24 | 20 hours | A focused path through the course outcomes and one working automation component. |
| Extended hands-on | 3 / 6 / 3 | 36 | 30 hours | Adds guided practice and implementation time while preserving the same three-module and homework structure. |

The lesson counts exclude breaks, travel, and the four-week workplace application periods. The extended version includes all compact lessons plus the lessons marked **Extended** below.

**One week before Module A (Module 1), self-paced warm-up:** Participants manually explore the designated ToolShop version and create a feature list, noting evidence and uncertainties. This preparation is not counted among the taught lessons. In Module 1, they use that manual baseline to create and validate a reusable skill for producing an evidence-based feature list.

### Learning Progression

The course follows one simulated product-delivery effort for ToolShop Czech Market Expansion. Each module represents a continuing sprint, and each sprint revisits relevant Holistic Testing areas rather than treating them as a sequential waterfall. Participants first work manually, then use AI prompting, standardize useful prompting as reusable skills, and consider agentic workflows only where the control and value justify them. Specific application behavior and target-state details remain to be verified against the selected ToolShop versions before implementation activities are finalized.

### Playwright Implementation Iterations

The practical automation work builds in three deliberate iterations:

1. **Registration baseline:** Implement Playwright UI and API tests for the registration feature using direct, straightforward test code. Do not introduce the Page Object Model (POM), keyword abstraction, or data-driven test patterns yet; participants first experience the behavior and maintenance trade-offs of a simple implementation.
2. **Login coverage and structure:** Design and automate the agreed login UI and API scenarios across T1–T5 with Playwright. Refactor or implement the suite using POM, keywords, and data-driven test inputs.
3. **API test-data setup:** Use Playwright API calls to create the required input data before the relevant tests run, then use that prepared data in the UI and API checks.

Each iteration adds capability to the same working test suite. The exact registration and login scenarios, API endpoints, and data requirements must be confirmed from the selected ToolShop version before exercises are finalized.

## Module 1: Discover, Plan, and Understand

**Sprint focus:** Establish a shared view of the Czech-market change, its quality risks, and the testing strategy. These areas continue to be revisited in later sprints.

| Day | Lesson title | Learning outcome |
|---|---|---|
| 1 | Holistic Testing and Continuous Quality | Explain how testing contributes to quality throughout product discovery and delivery, beyond executing automated tests. |
| 1 | Create a ToolShop Feature-List Skill | Turn the manually prepared feature inventory into a reusable skill that produces an evidence-based feature list and marks unknowns instead of inventing behavior. |
| 2 | Discover: Explore the Problem with the Team | Identify questions, stakeholders, and product information needed to uncover customer and business expectations. |
| 2 | Plan: Prioritize Quality Risks | Rank candidate quality risks using impact and likelihood, and relate priorities to testing choices. |
| 2 | Understand: Model User Workflows | Translate a user workflow into observable examples, relevant interfaces, and questions to investigate. |
| 2 | Refine Stories and Acceptance Criteria | Identify ambiguity in a story and formulate testable examples without adding unsupported requirements. |
| 3 | Manual-First Testing and Evidence | Perform a focused exploratory test and record reproducible observations and evidence before automating. |
| 3 | Iteration 1: Direct Playwright Tests for Registration | Implement basic Playwright UI and API tests for registration in direct test code, without POM, keyword, or data-driven patterns. |
| 1 | **Extended: Map Stakeholders and Quality Concerns** | Connect stakeholder perspectives to quality concerns and identify gaps that need follow-up. |
| 2 | **Extended: Compare Manual and AI Risk Analysis** | Evaluate differences in coverage, correctness, and assumptions between manual and AI-assisted risk analysis. |
| 2 | **Extended: Build a Scenario and Example Map** | Organize confirmed requirements and examples into a traceable scenario map. |
| 3 | **Extended: Draft the Strategy Backlog** | Convert prioritized risks and open questions into a sequenced backlog of testing and automation work. |

**Four-week workplace application:** Draft and begin applying a risk-based test automation strategy to the participant's RBI product; bring one decision, artifact, and open question to Module 2.

## Module 2: Understand and Build

**Sprint focus:** Design testing around prioritized risks and build maintainable checks while continuing discovery, planning, and collaboration.

| Day | Lesson title | Learning outcome |
|---|---|---|
| 1 | Revisit the Strategy with New Evidence | Update priorities and testing choices when new product or implementation information becomes available. |
| 1 | Select Three Highest-Risk Features for T1–T5 Design | Use the team's risk assessment to select three features and derive test scenarios for them using the agreed T1–T5 method, without treating example features as predetermined risks. |
| 2 | Prepare Synthetic Test Data | Specify safe, synthetic data needs and explain how data choices affect coverage and repeatability. |
| 2 | Choose What to Automate | Compare candidates by risk, feedback speed, repeatability, maintenance cost, and suitability for human exploration. |
| 2 | Iteration 2: Structure Login Tests with POM and Keywords | Organize the login automation around page objects and reusable keywords while keeping test intent readable. |
| 2 | Iteration 2: Data-Driven Login Suite for T1–T5 | Automate the agreed T1–T5 login UI and API scenarios with Playwright using data-driven inputs and the structured test design. |
| 3 | Review Direct and Structured Playwright Tests | Compare the registration baseline and login suite for readability, repeatability, feedback, and maintenance trade-offs. |
| 3 | Create a T1–T5 Test-Generation Skill | Create and validate a reusable skill that generates a traceable set of T1–T5 tests for the three features selected as highest risk, using confirmed requirements and marking gaps for clarification. |
| 1 | **Extended: Explore and Record Session Findings** | Conduct a time-boxed exploratory session and communicate findings using clear evidence and follow-up questions. |
| 2 | **Extended: Validate Test Data and Boundaries** | Review test-data scenarios for coverage, privacy, and unsupported assumptions. |
| 2 | **Extended: Improve an Automated Check** | Diagnose a provided check and improve its assertions or reliability without masking product failures. |
| 3 | **Extended: Evaluate Skill Repeatability** | Run a reusable skill against a second input and assess whether its output remains useful and correctly constrained. |

**Four-week workplace application:** Apply the draft strategy to a small, safe work context; evaluate one automation candidate and report its value, risks, and maintenance needs.

## Module 3: Build, Deploy, Release, Observe, and Learn

**Sprint focus:** Integrate testing evidence into delivery and release decisions, and improve the strategy using observed outcomes. The sprint continues to include Discover, Plan, and Understand activities as needed.

| Day | Lesson title | Learning outcome |
|---|---|---|
| 1 | Iteration 3: Create Test Data Through API Calls | Use Playwright API calls to create required input data before test execution and verify that the prepared data supports the intended checks. |
| 1 | Deploy: Verify the Test Environment | Identify environment and configuration risks that could invalidate test results. |
| 2 | Release: Assess Readiness from Evidence | Make a release recommendation tied to risks, test evidence, residual uncertainty, and explicit decision ownership. |
| 2 | Observe: Interpret Product and Test Signals | Select useful signals and distinguish observed behavior from assumptions about product quality. |
| 2 | Learn: Turn Results into Improvement | Convert defects, test outcomes, and team feedback into prioritized learning and improvement actions. |
| 2 | Controlled Agentic Testing Workflows | Design a bounded agentic workflow with defined tools, validation steps, human approval points, and failure limits. |
| 3 | Capstone: Present the Automation Strategy | Present a risk-based strategy, working automation evidence, AI-supported artifacts, and justified human oversight. |
| 3 | Sprint Review and Retrospective | Evaluate sprint outcomes and agree on evidence-based improvements for the next delivery cycle. |
| 1 | **Extended: Analyze a Defect and Its Test Gap** | Relate a defect to its risk, detection opportunity, and a proportionate prevention or detection improvement. |
| 2 | **Extended: Review a Release Evidence Set** | Identify evidence gaps, conflicting signals, and residual risks in a release-readiness assessment. |
| 2 | **Extended: Prototype and Challenge an Agent Workflow** | Test a bounded workflow with known inputs and evaluate its traceability, failure handling, and need for human approval. |
| 3 | **Extended: Demonstrate and Peer-Review the Capstone** | Critically review another team's strategy and automation evidence against stated risks and outcomes. |

**Four-week workplace application:** Complete a first draft of the participant's product test automation strategy and identify practical next steps for continued implementation.

## Capstone Outline

Teams use the ToolShop Czech Market Expansion case study to present:

- Czech-market quality risks and their priorities.
- Testing activities mapped across the Holistic Testing areas.
- A basic test automation strategy and justified automation candidates.
- Evidence of manual and AI-assisted testing, including validation of AI output.
- At least one working automated check or automation component.
- At least one reusable AI skill and, where feasible, a bounded agentic workflow.
- A release-readiness assessment, human oversight points, and lessons learned.

The assessment emphasizes the quality of testing decisions, evidence, working automation, critical evaluation of AI outputs, and understanding of holistic testing.

## Duration Trade-Off

The compact version gives participants a shared foundation and a narrow but complete path to the capstone in 24 lessons. The extended version adds 12 lessons for more practice, implementation, review, and peer feedback; it is the stronger choice for a mixed-experience audience, especially participants new to programming. Both retain the four-week workplace application periods and the same course outcomes.

## Appendix: Ideas Outside the Learning Lessons

These are future ideas to retain for consideration. They are not part of the current module sequence or learning lessons.

### ATDD: Convert T1–T5 Tests to Gherkin

Given an existing set of T1–T5 tests, generate a corresponding set of Gherkin scenarios as an ATDD-oriented representation. Preserve the intent and traceability of each source test, flag concepts that do not translate cleanly, and require review before treating generated scenarios as agreed acceptance examples.

### Observe: Identify Flaky APIs from Logs

Analyze a supplied application or test log to identify API calls associated with intermittent failures, then suggest candidate automated tests to investigate those patterns. Treat log-based correlations as hypotheses: verify the underlying behavior and distinguish product/API instability from test, environment, or infrastructure problems before adding automation.

### Three-Day Schedule

Each module uses the same timetable: day 1, 1:00–5:00 pm; day 2, 9:00 am–1:00 pm and 2:00–5:00 pm; day 3, 9:00 am–12:00 pm. Core lessons make up the compact version; **Extended** lessons are included only in the extended hands-on version. Every lesson is 50 minutes. Short breaks are scheduled between lessons, with lunch from 1:00–2:00 pm on day 2.

#### Module 1: Discover, Plan, and Understand

| Day | Time | Duration | Lesson |
|---|---|---:|---|
| 1 | 1:00–1:50 pm | 50 min | Holistic Testing and Continuous Quality |
| 1 | 2:00–2:50 pm | 50 min | Create a ToolShop Feature-List Skill |
| 1 | 3:00–3:50 pm | 50 min | **Extended:** Map Stakeholders and Quality Concerns |
| 2 | 9:00–9:50 am | 50 min | Discover: Explore the Problem with the Team |
| 2 | 10:00–10:50 am | 50 min | Plan: Prioritize Quality Risks |
| 2 | 11:00–11:50 am | 50 min | Understand: Model User Workflows |
| 2 | 12:00–12:50 pm | 50 min | Refine Stories and Acceptance Criteria |
| 2 | 2:00–2:50 pm | 50 min | **Extended:** Compare Manual and AI Risk Analysis |
| 2 | 3:00–3:50 pm | 50 min | **Extended:** Build a Scenario and Example Map |
| 3 | 9:00–9:50 am | 50 min | Manual-First Testing and Evidence |
| 3 | 10:00–10:50 am | 50 min | Iteration 1: Direct Playwright Tests for Registration |
| 3 | 11:00–11:50 am | 50 min | **Extended:** Draft the Strategy Backlog |

#### Module 2: Understand and Build

| Day | Time | Duration | Lesson |
|---|---|---:|---|
| 1 | 1:00–1:50 pm | 50 min | Revisit the Strategy with New Evidence |
| 1 | 2:00–2:50 pm | 50 min | Select Three Highest-Risk Features for T1–T5 Design |
| 1 | 3:00–3:50 pm | 50 min | **Extended:** Explore and Record Session Findings |
| 2 | 9:00–9:50 am | 50 min | Prepare Synthetic Test Data |
| 2 | 10:00–10:50 am | 50 min | Choose What to Automate |
| 2 | 11:00–11:50 am | 50 min | Iteration 2: Structure Login Tests with POM and Keywords |
| 2 | 12:00–12:50 pm | 50 min | Iteration 2: Data-Driven Login Suite for T1–T5 |
| 2 | 2:00–2:50 pm | 50 min | **Extended:** Validate Test Data and Boundaries |
| 2 | 3:00–3:50 pm | 50 min | **Extended:** Improve an Automated Check |
| 3 | 9:00–9:50 am | 50 min | Review Direct and Structured Playwright Tests |
| 3 | 10:00–10:50 am | 50 min | Create a T1–T5 Test-Generation Skill |
| 3 | 11:00–11:50 am | 50 min | **Extended:** Evaluate Skill Repeatability |

#### Module 3: Build, Deploy, Release, Observe, and Learn

| Day | Time | Duration | Lesson |
|---|---|---:|---|
| 1 | 1:00–1:50 pm | 50 min | Iteration 3: Create Test Data Through API Calls |
| 1 | 2:00–2:50 pm | 50 min | Deploy: Verify the Test Environment |
| 1 | 3:00–3:50 pm | 50 min | **Extended:** Analyze a Defect and Its Test Gap |
| 2 | 9:00–9:50 am | 50 min | Release: Assess Readiness from Evidence |
| 2 | 10:00–10:50 am | 50 min | Observe: Interpret Product and Test Signals |
| 2 | 11:00–11:50 am | 50 min | Learn: Turn Results into Improvement |
| 2 | 12:00–12:50 pm | 50 min | Controlled Agentic Testing Workflows |
| 2 | 2:00–2:50 pm | 50 min | **Extended:** Review a Release Evidence Set |
| 2 | 3:00–3:50 pm | 50 min | **Extended:** Prototype and Challenge an Agent Workflow |
| 3 | 9:00–9:50 am | 50 min | Capstone: Present the Automation Strategy |
| 3 | 10:00–10:50 am | 50 min | Sprint Review and Retrospective |
| 3 | 11:00–11:50 am | 50 min | **Extended:** Demonstrate and Peer-Review the Capstone |

The requested “12am” end time on day 3 is interpreted as 12:00 pm (noon). Day 1 lessons run after morning travel; day 3 lessons finish before afternoon travel. Day 2 includes a 1:00–2:00 pm lunch break. The 4:00–5:00 pm block on days 1 and 2 is unallocated buffer.

## Detailed Lesson Descriptions

The timetable above gives the time slot and 50-minute duration for each lesson. The descriptions below clarify its focus, participant work, and expected result. **Extended** lessons are included only in the extended hands-on version.

### Module 1: Discover, Plan, and Understand

#### Holistic Testing and Continuous Quality

Participants place testing activities around the ToolShop delivery lifecycle, relating collaboration and risk discovery to building, release, observation, and learning. They create a shared map that shows testing as a continuous team responsibility rather than a final test phase.

#### Create a ToolShop Feature-List Skill

Participants bring the manually created pre-course feature inventory and distinguish observed behavior from assumptions and unknowns. They turn their discovery process into a reusable skill with explicit inputs, evidence requirements, output structure, and checks against invented features, then compare its result with their manual list.

#### Discover: Explore the Problem with the Team

Participants examine the Czech-market mission from customer, business, and delivery perspectives. They record questions and information needs that should be resolved through collaboration before the team commits to product behavior or testing scope.

#### Plan: Prioritize Quality Risks

Participants identify potential product and delivery risks, assess their relative likelihood and impact, and rank them for attention. They connect the highest priorities to evidence the team needs and testing activities that could provide that evidence.

#### Understand: Model User Workflows

Participants trace selected user journeys through the observed application and identify relevant screens, API interactions, data states, and decision points. The resulting workflow map makes important paths and unanswered behavior questions visible to the team.

#### Refine Stories and Acceptance Criteria

Participants review a case-study backlog item for ambiguity, missing examples, and untestable wording. They produce clarified questions and candidate acceptance examples while keeping unconfirmed product rules explicitly unresolved.

#### Manual-First Testing and Evidence

Participants use a short exploratory charter to investigate a selected ToolShop workflow without AI or automation. They capture actions, observations, expected-versus-observed behavior, and reproducible evidence as a baseline for later automated and AI-assisted work.

#### Iteration 1: Direct Playwright Tests for Registration

Using the prepared Playwright environment and confirmed registration behavior, participants implement and run a small set of direct UI and API tests. They keep the code straightforward, deliberately avoiding POM, keyword abstractions, and data-driven patterns so they can see what the simplest working implementation makes easy or difficult.

#### **Extended: Map Stakeholders and Quality Concerns**

Participants identify who is affected by the market-expansion change and what each stakeholder needs from the product. They connect these concerns to quality attributes and open questions, producing a stakeholder-to-quality map for risk discussions.

#### **Extended: Compare Manual and AI Risk Analysis**

Participants independently identify risks, then ask an AI assistant to propose additional risks from the same verified context. They compare coverage and assumptions, reject unsupported suggestions, and update the risk list with evidence and ownership for unresolved questions.

#### **Extended: Build a Scenario and Example Map**

Participants connect confirmed needs and acceptance examples to user scenarios, risks, and possible checks. They identify gaps in traceability and mark any scenario that depends on behavior not yet confirmed.

#### **Extended: Draft the Strategy Backlog**

Participants convert the prioritized risks, evidence gaps, and candidate checks into an ordered backlog of testing work. Each item records its purpose and intended feedback, providing a first actionable input to the automation strategy.

### Module 2: Understand and Build

#### Revisit the Strategy with New Evidence

Participants bring evidence and questions from their four-week workplace application and compare it with the current strategy. They decide which priorities remain valid, which need revision, and what additional information would change the plan.

#### Select Three Highest-Risk Features for T1–T5 Design

Participants use the team's documented risk assessment to choose the three features that warrant the most focused test design; examples such as login, registration, search, and checkout are candidates, not predetermined selections. They record why each feature was selected and identify the confirmed requirements needed to design its tests.

#### Prepare Synthetic Test Data

Participants identify the data conditions needed for selected scenarios, including valid, invalid, boundary, and state-dependent inputs where relevant. They specify synthetic values and constraints that support repeatable tests without exposing personal or production data.

#### Choose What to Automate

Participants compare candidate checks by risk, repeatability, feedback speed, maintenance cost, and the value of human exploration. They select automation candidates and document why other activities should remain manual or AI-assisted.

#### Iteration 2: Structure Login Tests with POM and Keywords

Participants organize confirmed login UI behavior using page objects and reusable keywords, separating interaction details from scenario intent. They implement a small structured slice and review whether the abstractions improve clarity without hiding meaningful test behavior.

#### Iteration 2: Data-Driven Login Suite for T1–T5

Participants represent the agreed T1–T5 login scenarios as data-driven cases and execute the applicable UI and API checks with Playwright. They maintain traceability from each case to its source requirement and expected result, and investigate failures rather than treating a green run as proof of completeness.

#### Review Direct and Structured Playwright Tests

Participants compare the direct registration tests with the structured login suite, examining readability, duplication, change impact, and failure diagnosis. They record when POM, keywords, and data-driven inputs provide value and where added abstraction would be unnecessary.

#### Create a T1–T5 Test-Generation Skill

Participants create a reusable skill that accepts confirmed requirements and the team's risk-ranked feature selection, then produces traceable T1–T5 tests for the three selected features. They validate the output against the agreed T1–T5 method, flag missing requirements, and reject invented expected results before using any generated tests.

#### **Extended: Explore and Record Session Findings**

Participants run a time-boxed exploratory session on a selected feature using a charter tied to a risk. They record the path explored, evidence, unexpected observations, and follow-up questions in a form the team can use for triage and future test design.

#### **Extended: Validate Test Data and Boundaries**

Participants review proposed test data against scenario coverage, boundary conditions, repeatability, and privacy constraints. They identify data that is unsupported or unsafe and refine the specification before it is used by automated tests.

#### **Extended: Improve an Automated Check**

Participants inspect a provided Playwright check and diagnose a reliability or assertion problem. They make a focused improvement, rerun the check, and confirm that the change preserves the ability to reveal a real product defect.

#### **Extended: Evaluate Skill Repeatability**

Participants run the T1–T5 skill with a second feature or changed input and compare its output with the first run. They assess consistency, traceability, handling of missing information, and whether the skill needs tighter constraints.

### Module 3: Build, Deploy, Release, Observe, and Learn

#### Iteration 3: Create Test Data Through API Calls

Participants add Playwright API calls that create required synthetic input data before relevant checks execute. They verify the created state, use it in UI or API tests, and distinguish test setup from the behavior each test is intended to verify.

#### Deploy: Verify the Test Environment

Participants perform a preflight review of the training environment, including target URL, service availability, configuration, and required test access. They identify environment failures that could invalidate results and avoid exposing credentials or other secrets in test artifacts.

#### Release: Assess Readiness from Evidence

Participants review risk priorities, manual findings, automated results, known defects, and unresolved questions to make a release-readiness recommendation. They state residual risk and identify who owns the release decision rather than treating test completion as automatic approval.

#### Observe: Interpret Product and Test Signals

Participants select useful signals from test outcomes and available product or service observations. They distinguish a signal that warrants investigation from proof of a root cause, and identify what additional evidence would clarify the product's behavior.

#### Learn: Turn Results into Improvement

Participants review defects, missed risks, test failures, and team feedback from the simulated sprint. They turn the most useful findings into prioritized changes to the product backlog, test suite, or automation strategy.

#### Controlled Agentic Testing Workflows

Participants sketch a bounded workflow that can combine a reusable skill with approved read-only inputs or test tools. They define its trigger, steps, expected artifacts, validation gates, failure handling, and points where a person must review or approve the result.

#### Capstone: Present the Automation Strategy

Teams present their risk-based strategy, selected automation candidates, and working Playwright evidence from the case study. They explain their T1–T5 coverage, AI-generated artifact validation, data setup, maintenance choices, and remaining uncertainty.

#### Sprint Review and Retrospective

Participants compare the sprint goal with the delivered work and evidence, then identify what helped or hindered quality. They agree on a small number of specific improvement actions and owners for the next iteration.

#### **Extended: Analyze a Defect and Its Test Gap**

Participants examine a supplied defect report and relate it to the affected user behavior, quality risk, and evidence available at the time. They propose a proportionate prevention or detection improvement and identify which existing or new check could provide useful feedback.

#### **Extended: Review a Release Evidence Set**

Participants inspect a sample release evidence set for missing coverage, conflicting results, and unresolved high-priority risks. They produce a concise readiness view that separates facts, assumptions, and decisions still required.

#### **Extended: Prototype and Challenge an Agent Workflow**

Participants exercise a constrained agentic workflow with known inputs and review its outputs, tool use, and failure behavior. They test whether validation and human approval points prevent unsupported or unsafe actions, then refine the workflow boundary.

#### **Extended: Demonstrate and Peer-Review the Capstone**

Teams demonstrate their strategy and working automation to peers, who review traceability from risk to test evidence and assess whether conclusions are supported. Each team records actionable feedback and one improvement to carry into workplace practice.