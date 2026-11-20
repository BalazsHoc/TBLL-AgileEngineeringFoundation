# Create the 42-Vienna Test Policy from Fundamentals of Testing

## Reference to to ISTQB Syllabus chapter

ISTQB FL – 1 Fundamentals of Testing

| Section | Topic                                            |
| ------- | ------------------------------------------------ |
| 1.1     | What is Testing?                                 |
| 1.1.1   | Test Objectives                                  |
| 1.1.2   | Testing and Debugging                            |
| 1.2     | Why is Testing Necessary?                        |
| 1.2.1   | Testing's Contributions to Success               |
| 1.2.2   | Testing and Quality Assurance (QA)               |
| 1.2.3   | Errors, Defects, Failures, and Root Causes       |
| 1.3     | Testing Principles                               |
| 1.4     | Test Activities, Testware and Test Roles         |
| 1.4.1   | Test Activities and Tasks                        |
| 1.4.2   | Test Process in Context                          |
| 1.4.3   | Testware                                         |
| 1.4.4   | Traceability between the Test Basis and Testware |
| 1.4.5   | Roles in Testing                                 |
| 1.5     | Essential Skills and Good Practices in Testing   |
| 1.5.1   | Generic Skills Required for Testing              |
| 1.5.2   | Whole Team Approach                              |
| 1.5.3   | Independence of Testing                          |


## Link to the transfer task file

https://github.com/rgroetz2/TBLL-AgileEngineeringFoundation/blob/main/courses/TestBusters-LearningLab/ISTQB-2026/foundationLevel/transferTasks/Chapter%201/ISTQB-FL-1_Test_Policy_42Vienna_20260706.md

## Outcome - 42-Vienna Test Policy.md

### Document control

| Field | Value |
|---|---|
| Version | 1.0 |
| Date | 12 November 2026 |
| Author | Balazs Hocsak |
| Reviewer | To be assigned |

### 1. Introduction - What Is Testing?

Testing is the activity of evaluating a 42-Project and its related work
products to find defects and check whether the project meets its subject
requirements. Testing is more than simply running the program: it
includes planning, reviewing the subject, designing checks, executing
tests, and reporting results.

-   **Verification** checks whether the project was built according to
    the requirements in its subject.
-   **Validation** checks whether the project works as expected and is
    acceptable during peer evaluation.
-   **Static testing** checks work without running it, for example by
    reviewing source code, the Makefile, or a subject checklist.
-   **Dynamic testing** runs the software or uses it through a client or
    browser to observe its behaviour.

For example, `push_swap` can be checked by reviewing its input handling
and by running its output through `checker_OS`. `ft_irc` can be tested
by connecting with an IRC client. `ft_transcendence` can be tested by
launching its stack and using the website in a browser.

#### 1.1 Test Objectives

The objectives of testing in 42-Projects are to: - check that mandatory
subject requirements and deliverables are met; - find defects before
peer evaluation; - check error handling and edge cases; - detect
forbidden functions or behaviour; - provide evidence that the project is
ready for evaluation.

The focus depends on the project. For `push_swap`, testing focuses on
correct sorting, invalid input, and operation count. For `ft_irc`, it
focuses on server and client communication, authentication, channels,
and stability. For `ft_transcendence`, it focuses on the website,
real-time gameplay, security, and whether the required stack starts
correctly.

#### 1.2 Testing and Debugging

Testing reveals failures; debugging is the work of finding the cause and
fixing the defect. The project author is responsible for debugging their
code. After a fix, the author should rerun the relevant tests, and a
peer validator should perform confirmation testing to check that the
problem is fixed. For example, if `ft_irc` unexpectedly quits after
receiving input, the author investigates and fixes the cause, then a
peer checks the behaviour again.

### 2. Why Is Testing Necessary?

Testing is necessary because defects can cause a project to fail peer
evaluation or prevent it from meeting its subject requirements. Testing
before evaluation gives the author time to find and fix problems. A
failed evaluation means the relevant work must be corrected and
evaluated again, which can delay curriculum progress.

#### 2.1 Testing and Quality Assurance (QA)

**Testing** checks the project and finds defects. **Quality assurance
(QA)** improves the way the work is produced so that defects are less
likely to happen. For example, testing checks whether `push_swap` sorts
correctly, while a QA practice is to compile regularly with the required
warning flags and follow the subject rules throughout development.

#### 2.2 Errors, Defects, Failures, and Root Causes

-   **Error:** A human mistake, such as misunderstanding a sorting
    condition.
-   **Defect:** A problem in a work product caused by an error, such as
    incorrect sorting logic in `push_swap`.
-   **Failure:** Incorrect behaviour observed when the software runs,
    such as `checker_OS` reporting `KO`.
-   **Root cause:** The underlying reason why the error or defect
    happened, such as an incorrect assumption about input handling.

A defect in `ft_irc` could cause the server to crash when it receives
unexpected input. The crash is the failure; the defect is in the code,
and the root cause may be missing input validation.

### 3. Testing Principles

The seven ISTQB testing principles apply to all 42-Projects:

  -----------------------------------------------------------------------
  Testing principle                   Application in 42-Projects
  ----------------------------------- -----------------------------------
  Testing shows the presence, not the Passing all current `push_swap`
  absence, of defects.                tests does not prove that every
                                      possible input is handled
                                      correctly.

  Exhaustive testing is impossible.   It is not practical to test every
                                      possible `push_swap` input or every
                                      possible `ft_irc` message, so
                                      representative and high-risk cases
                                      are selected.

  Early testing saves time and money. Check the Makefile, mandatory
                                      requirements, and basic error
                                      handling early instead of waiting
                                      until the project is nearly
                                      finished.

  Defects cluster together.           If one part of `ft_transcendence`
                                      has several defects, related
                                      features and code should receive
                                      extra testing.

  Tests wear out.                     Repeating only the same successful
                                      `push_swap` inputs may stop finding
                                      new defects; add new edge cases and
                                      varied inputs.

  Testing is context dependent.       `push_swap` needs algorithm and
                                      input testing, `ft_irc` needs
                                      network and protocol testing, and
                                      `ft_transcendence` needs browser,
                                      security, and full-stack testing.

  Absence-of-defects fallacy.         A project that has no known bugs
                                      can still fail if it does not meet
                                      the subject requirements or user
                                      needs.
  -----------------------------------------------------------------------

### 4. Test Activities and Tasks

Testing is a set of activities that may overlap and be repeated during a
project:

1.  **Test planning:** Decide the testing objectives, scope, resources,
    and schedule.
2.  **Test monitoring and test control:** Track progress and take action
    when testing does not go as planned.
3.  **Test analysis:** Review the subject and identify what needs to be
    tested.
4.  **Test design:** Decide how to test each condition and create test
    cases.
5.  **Test implementation:** Prepare test cases, test data, tools, and
    checklists.
6.  **Test execution:** Run the tests, compare actual and expected
    results, and report defects.
7.  **Test completion:** Finish the testing activities, record results,
    and store useful testware.

In a typical 42-Project, students first read the subject and plan their
checks, then design and prepare tests, perform self-testing, attend peer
evaluation, fix reported defects, and undergo re-testing where needed.

#### 4.1 Test Process in Context

The test process must fit the project and its subject. Students must
follow the specified language, mandatory features, deliverables,
compilation rules, and forbidden functions or libraries. Testing a C
project such as `push_swap` differs from testing the C++ network server
`ft_irc` or the full-stack web project `ft_transcendence`.

Testing must also consider the available environment and evaluation
conditions. For example, `ft_irc` needs an IRC client to check server
behaviour, while `ft_transcendence` needs its required services running
and a browser for user-facing checks. Validators should use the
subject's stated evaluation criteria and tools, and should not assume
that a feature is required unless the subject says so.

#### 4.2 Testware

**Testware** means the work products created or used during testing. For
42-Projects, it can include: - test plans and self-test notes; - test
conditions and test cases; - test input lists and test data; -
peer-evaluation checklists; - test scripts and setup instructions; -
defect reports and re-test results; - test completion reports.

Project-related tools can also support testing. Examples include
`checker_OS` for `push_swap`, an IRC client for `ft_irc`, and a browser
and the project's launch setup for `ft_transcendence`.

#### 4.3 Traceability

**Traceability** means linking each subject requirement to the tests and
results that check it. For example, each mandatory `push_swap`
requirement should link to one or more test cases, their input data, and
their results, including the relevant `checker_OS` outcome. This helps
authors and peer validators see whether every mandatory requirement has
been checked.

#### 4.4 Roles in Testing

-   **Project author:** Reads the subject, plans and performs
    self-testing, fixes defects, and prepares the project for
    evaluation.
-   **Peer validator:** Another 42 student who independently checks the
    project against the subject and records the results.
-   **Evaluatee:** The student whose project is being evaluated; they
    provide the required project materials and clarify questions without
    directing the validator's result.
-   **Co-evaluator (when applicable):** A second validator who supports
    the evaluation and helps ensure that checks are applied
    consistently.

The author is responsible for the quality of their work and for fixing
defects. The peer validator is responsible for carrying out the assigned
checks fairly and reporting evidence. Curriculum completion is based on
the required peer-validation outcome, not on the author's own approval.

### 5. Skills and Good Practices

Good testing requires: - careful reading and understanding of subject
PDFs; - analytical thinking and the ability to identify edge cases; -
knowledge of the project's language, tools, and environment; - clear and
respectful communication; - accurate recording of test steps, expected
results, and actual results; - willingness to question assumptions and
investigate unexpected behaviour.

Students should report what happened, how to reproduce it, and which
subject requirement is affected. Feedback should focus on the work, not
the person.

#### 5.1 Whole Team Approach

The **Whole Team Approach** means that everyone involved shares
responsibility for quality. In team projects, such as
`ft_transcendence`, developers should discuss requirements, review each
other's work, and test features together throughout development.
Collaboration does not remove individual responsibility for assigned
work or the need for independent peer validation.

#### 5.2 Independence of Testing

**Independence of testing** means that someone other than the author
checks the work. Authors should test their own code during development,
but self-testing alone is not enough for final peer validation. Under
the 42 evaluation model, the validator must be another 42 student who
did not author the work being evaluated. A fresh perspective can reveal
assumptions and defects that the author may overlook.

### 6. Peer Validation by 42 Students

Peer validation checks whether a 42-Project meets the mandatory
requirements and peer-evaluation criteria stated in its subject. It is
an independent validation activity and is required before the project
can count as successfully completed.

#### Inputs

The peer validator should use: - the official project subject PDF,
including its mandatory requirements and evaluation criteria; - the
project repository and source code; - the Makefile and required launch
instructions; - the mandatory deliverables; - subject-provided
evaluation tools or clients, where specified.

#### Activities

The validator should: 1. confirm that the project can be built and
launched as required; 2. review the implementation against the subject;
3. run functional tests and relevant edge cases; 4. check error handling
and any forbidden behaviour; 5. use the relevant evaluation tool or
client; 6. record failures with clear reproduction steps; 7. repeat
relevant checks after the author fixes reported defects.

Examples of peer-validation questions:

-   **`push_swap`:** Does invalid input produce the required error
    output, and does the result pass `checker_OS`?
-   **`ft_irc`:** Can a client connect and use the required server
    features, and does the server remain running when it receives
    unexpected input?
-   **`ft_transcendence`:** Does `docker-compose up --build` launch the
    required stack, and does the website work in a browser without
    unhandled errors?

These are example checks; the official subject and its evaluation
criteria determine the actual pass conditions.

#### Outcomes and communication

The validator records a **pass** or **fail** according to the subject's
evaluation rules. Failed checks must be documented so the author knows
what needs to be corrected. After rework, the relevant checks are
repeated. Feedback must be objective, respectful, and based on
observable behaviour and subject requirements---not personal opinions.

### 7. Policy Review

This policy applies to 42-Projects at 42-Vienna and supports consistent
self-testing and peer validation. Students and reviewers should use the
current project subject as the authoritative source for project-specific
requirements. The policy should be reviewed when the curriculum's
evaluation process or testing expectations change.

## Learning Summary

| Concept | One-line takeaway |
|---|---|
| **Software testing** | set of activities to discover defects and evaluate the quality of software work products |
| **Static testing** | no software execution (e.g. Code review) |
| **Dynamic testing** | involves the execution of software (e.g. Unit testing) |
| **1.2 Why is Testing Necessary?** |
| **Test Objective** | goal or purpose of testing that defines what we want to achieve by performing testing |
| **Quality Assurance (QA)** | a process used to ensure that software development processes and activities follow defined standards and procedures to produce high-quality software |
| **Root Cause** | he underlying reason why an error or defect occurred |
| **Error** | human mistake made by a developer, tester, or another person during software development |
| **Defect (Bug)** | a flaw or problem in the software caused by an error. It can make the software behave incorrectly |
| **Failure** | happens when the software does not work as expected during execution |
| **1.3. Testing Principles** |
| **1.4 Test Activities and Tasks** |
| **Test planning** | the process of defining the testing objectives, scope, resources, and schedule to ensure a software product meets its requirements |
| **Test monitoring** | The process of tracking testing progress and comparing actual results with the test plan |
| **Test control** | Making changes when testing does not go as planned |
| **Test analysis** | The process of checking requirements to decide what needs to be tested |
| **Test design** | The process of deciding how to test the software and creating test cases. |
| **Test implementation** | The process of preparing test cases, test data, and tools needed for testing |
| **Test execution** | The process of running tests and checking if the software works correctly |
| **Test completion** | The process of finishing testing, documenting the results, and reporting what was learned |
| **Stakeholders** | needs, expectations, requirements, willingness to cooperate, etc. |
| **Technical factors** | type of software, product architecture, technology used, etc. |
| **Project constraints** | scope, time, budget, resources, etc. |
| **Organizational factors** | organizational structure, existing policies, practices used, etc. |
| **Software development lifecycle** | engineering practices, development methods, etc. |
| **Tools** | availability, usability, compliance, etc. |
| **Test management role** | The process of planning, organizing, and controlling testing activities to ensure everything runs smoothly |
| **Testing role** | The person responsible for checking the software, finding bugs, and reporting problems |
| **1.5. Essential Skills and Good Practices in Testing** |
| **Whole Team Approach** | Everyone in the team works together and shares responsibility for software quality and testing |
| **Independence of Testing** | Testing is done by someone other than the person who developed the software, to find mistakes more easily |


Explain the conclusion of the task.

> *Treat every AI-generated test artifact as an unreviewed first draft from a junior colleague who has never seen your system.*
