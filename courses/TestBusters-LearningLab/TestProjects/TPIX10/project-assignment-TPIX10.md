# Project Assignment

## Project: **Pixture Real-World Test — Functional and Non-Functional Practice Testing of pixture.net**

### Project Name ###

Test Pixture (**TPIX10**)

---

## 1. Project Purpose

The purpose of this project is to plan, coordinate, and deliver functional and non-functional testing of the **Pixture** web application (https://www.pixture.net) from the perspective of real users.

The project focuses on one guiding question:

> **Can a user understand Pixture and complete their intended tasks reliably, comprehensibly, and pleasantly?**

The aim is **not** to confirm that Pixture "works". The aim is to give an honest picture of what works well, what doesn't work, and what users would expect to be different.

This assignment is defined from a **project management perspective**. QualityQuest Consulting (QQC) organizes the testing activities as a test project based on **ISO/IEC/IEEE 29119** within an **agile, continuous delivery setup**.

---

## 2. Project Background

Pixture is a web-based application for jointly managing, viewing, selecting, and using images and videos.

The product owner and client, codename Jack Doe, has asked the TestBusters-LearningLab (TBLL) to test Pixture under real conditions. The work is done as part of thei learning journey's in the TestBusters-LearningLab (TBLL): students acting as QualityQuestConsulting (QQC) testers work on a real product with a real client. QQC is the fictional IT-Company of TBLL with fosuc on software testing.

Both parties want the project to become a **good reference example** of how to collaborate on testing.

Characteristics of the project setup:

- **No release plan.** Bug fixes and changes are delivered continuously, and the cadence of testing follows the processing of tickets in JIRA.
- **Unplanned test stops** can occur at any time.
- **Methodological freedom.** The client deliberately leaves the choice of test techniques to the team.
- **Gentleman's agreement.** There is no commercial contract.

---

## 3. Project Objective

The main objective of the project is:

> **To explore and test Pixture from the user's point of view in a structured, transparent, and value-driven way, and to provide the client with an unbiased picture of its functional quality and usability.**

The project shall provide:

- A lightweight test management structure following ISO/IEC/IEEE 29119
- Functional end-to-end testing from the user's perspective
- Free, exploratory use of the application
- Non-functional observations, especially on usability and user experience
- Well-documented defect and observation reports in JIRA
- Well-documented test artifacts in Testiny.io and Github.
- Retests of fixed defects within the JIRA workflow
- Critical, constructive feedback and improvement suggestions
- A short summary assessment by the team at the end of testing

---

## 4. Test Item and Test Focus

### Test Item

The Pixture web application provided at **pixture.net**, used in a **dedicated test tenant**.

### Functional Test Focus (End-to-End, User Perspective)

| # | Focus Area |
|---|---|
| F1 | Login and orientation within the application |
| F2 | Navigation and general operability |
| F3 | Import / upload of images and videos |
| F4 | Display and viewing of media |
| F5 | Selection and organization of media |
| F6 | Comments and collaboration between multiple users |
| F7 | Use of different user roles and permissions |
| F8 | Behavior on desktop, tablet, and smartphone |
| F9 | Typical workflows spanning multiple functions |
| F10 | Understandable behavior on invalid input and unusual situations |

In addition, the test team shall use Pixture **freely and exploratively**.

### Non-Functional Observations

| # | Quality Characteristic / Observation Area |
|---|---|
| N1 | Understandability and user-friendliness |
| N2 | Intuitive operation and UI consistency |
| N3 | Display on different screen sizes and devices |
| N4 | Perceived speed and response time |
| N5 | Stability and reliability |
| N6 | Understandable error messages |
| N7 | Unexpected or irritating behavior |
| N8 | Data privacy or security anomalies, as noticed from the user's perspective |

> **Important:** A function that is technically correct but that users don't understand, or that behaves differently than they expect, **is a relevant test result**. Observations following the principle *"I like it"* / *"this must be different"* are explicitly valuable.

---

## 5. Project Scope

### In Scope

- Planning and coordinating the test project, with QQC acting as test organization
- Functional end-to-end testing through the user-facing web interfaces
- Exploratory testing and freely chosen usage scenarios
- Structured test cases, where the team finds them useful
- Usability and user experience evaluation
- Cross-device and cross-browser observations (desktop, tablet, smartphone)
- Observation of perceived performance and stability, without load generation
- Data privacy and security observations from the user's perspective
- Testing of roles and permissions
- Test artifacts (test cases, test runs, ...) via Testiny.io
- Defect and observation reporting in JIRA
- Retesting of fixed defects, as part of the JIRA workflow
- A final summary assessment by the team

### Out of Scope

- Shell, SSH, or administrative system access to the servers used by Pixture (in particular **decoy** and **brown**). This access will not be provided.
- Penetration testing
- Aggressive security scans
- Load and stress testing
- Automated activities that could impair regular operation or external services. These require **prior agreement with the client**.
- Translation quality. This has low priority or is deliberately out of scope, because Pixture may switch between translation providers for cost reasons.
- Examination of data or functions that are obviously not intended for testing (see Section 8)
- Additional formal reporting beyond JIRA (see Section 10)
- Formal certification, legal compliance audits, or commercial contractual obligations

### Conditional Scope

- **Source code review:** if source code becomes relevant for a technical analysis, the client can provide selected code for inspection through a dedicated, secured web interface. This does **not** grant general access to the underlying systems.

---

## 6. Test Approach

### Test Methodology

The client deliberately leaves the team free to choose the concrete test methods. Welcome approaches include:

- Structured test cases
- Exploratory testing, for example session-based testing with charters
- Freely chosen, realistic usage scenarios and personas
- Multi-user collaboration scenarios
- Device and browser variation

### Test Cadence

- There is **no release plan**. Test activities are **ongoing** and driven by the processing of tickets in JIRA.
- Fixed defects are **retested** after resolution, as part of the JIRA workflow.
- **Unplanned test stops** can occur. The team pauses and resumes testing as communicated by the client.

### Defect and Observation Reports

Every reported problem or observation should contain:

| Information | Description |
|---|---|
| User goal | What did the user want to achieve? |
| Steps | Which steps were performed? |
| Expected result | What was expected? |
| Actual result | What actually happened? |
| Reproducibility | Is the behavior reproducible? |
| Environment | Device, operating system, and browser used |
| Evidence | Screenshot or screen recording, where applicable |

Defects are recorded in the client's **JIRA** instance (project **PMQA**: https://mailpost.atlassian.net/browse/PMQA-1). The client will provide suitable access.

### ISO/IEC/IEEE 29119 Alignment (Lightweight)

QQ applies the ISO 29119 test processes in a lean form suited to the agile, ticket-driven setup:

| ISO 29119 Process Level | Application in TPIX10 |
|---|---|
| Organizational Test Process | QQC / TBLL test policy and practices apply |
| Test Management Process | Lean test plan, monitoring and control through JIRA, test completion summary |
| Dynamic Test Process | Test design (charters, scenarios, test cases), test environment and test data set-up, test execution, test incident reporting in JIRA |

---

## 7. Test Environment and Test Data

- A **dedicated test tenant** on pixture.net is used for the project.
- **User roles** and **test accounts** are set up by the client.
- **Test data** (images and videos) is provided by the client. How and where it will be provided is still to be defined.
- Wherever possible, only test data, or data whose use for this purpose is permitted, may be used.

---

## 8. Data Privacy and Responsible Conduct

- Don't bring real personal or confidential data into the test system unless necessary.
- If the team unintentionally comes across data or functions that are obviously not meant for testing, it must **not investigate them further**. Report the finding **immediately to the client via the TBLL coach (proxy)**.
- Handle all access credentials and information provided by the client responsibly and confidentially.

---

## 9. Key Deliverables

| Deliverable | Description |
|---|---|
| Test Plan (lean) | Internal QQC plan covering scope, approach, roles, environment, test data, and risks |
| Test Charters / Test Scenarios / Test Cases | Testware chosen by the team to cover the functional and non-functional focus areas |
| Defect and Observation Reports | Recorded in JIRA (PMQA) with the information defined in Section 6 |
| Retest Results | Confirmation or rejection of fixes, documented in the JIRA workflow |
| Simple Quality Summaries | Plain, lightweight summaries (for example, in the style of https://www.pixture.net/quality/) |
| Final Team Assessment | Short summary of what works well, what doesn't work, what users don't understand or expect differently, which workflows are problematic, and which improvements are most valuable |

---

## 10. Project Governance and Reporting

The project follows an agile, continuous delivery model. Testing follows ticket flow, not sprints or releases.

### Reporting

| Report | Frequency / Form |
|---|---|
| Defect and observation reports | Ongoing, in JIRA |
| Retest results | Ongoing, after each fix, in JIRA |
| JIRA reports | As provided by JIRA; no additional reporting overhead |
| Simple quality summaries | As needed, plain and short |
| Final team assessment | End of testing, presented in person at a joint dinner in Vienna hosted by the client |

> There will be **no additional formal reporting** beyond the JIRA reports and simple summaries.

---

## 11. Stakeholders

| Stakeholder | Role / Interest |
|---|---|
| Jack Doe (Client / Product Owner Pixture) | Commissions the test, provides tenant, roles, test data, and JIRA access; wants an unbiased picture of Pixture's quality |
| TestBusters-LearningLab (TBLL) | Contractor; provides the learning frame and the test team |
| QualityQuestConsulting (QQC) | Fictional student test organization; plans, coordinates, and executes testing |
| TBLL Quality Engineering Coach | Proxy between client and test team; coaching and coordination |
| Students | Gain practical learning from testing a real product |

---

## 12. Roles and Responsibilities

### Client: Jack Doe

Responsible for:

- Providing the test tenant, user roles, and test accounts
- Providing test data (images and videos)
- Providing JIRA access (project PMQA)
- Fixing defects and processing tickets
- Answering questions and giving feedback, and supporting the proxy with input
- Providing selected source code through a secured interface, if needed
- Announcing test stops

### TBLL Quality Engineering Coach / Proxy: Rudolf Grötz

Responsible for:

- Acting as the single point of contact between the client and the test team, at least initially
- Relaying requirements, questions, and feedback in both directions
- Immediately escalating sensitive findings (Section 8) to the client
- Coaching the team in quality engineering and ISO 29119 practices
- Guiding professional test management behavior

### QualityQuest Consulting: Test Team (Students)

Team members: *to be defined*

Responsible for:

- Planning the test approach and creating a lean test plan
- Designing and executing functional and exploratory tests
- Recording non-functional observations
- Writing complete, reproducible defect and observation reports in JIRA
- Retesting fixed defects
- Looking at Pixture critically and contributing their own ideas, observations, and improvement suggestions
- Preparing the final team assessment

---

## 13. Communication Management

### Communication Path

- **Initially:** Client ⇄ TBLL Coach (proxy) ⇄ QQC test team
- **Later:** the communication path can be adjusted jointly, for example to direct contact between the team and the client.
- **Defects and observations:** JIRA (PMQA)

### Communication Principles

- Communicate early, especially when something is blocked or sensitive
- Report facts and observations, including subjective user impressions, clearly labeled as such
- Critical feedback is explicitly welcome
- Minor irritations matter too, especially when several users stumble over them
- Treat information and access confidentially

---

## 14. Project Constraints

- Learning project context with limited availability of students
- No release plan; ticket-driven, ongoing cadence
- Possible unplanned test stops
- Testing only through user-facing web interfaces; no system access
- No load, stress, penetration, or aggressive automated testing without prior agreement
- Dependence on the client for tenant, roles, test data, and JIRA access
- No commercial contract (gentleman's agreement)

---

## 15. Project Risks (Initial)

| Risk | Impact | Mitigation |
|---|---|---|
| Delayed provision of tenant, roles, test data, or JIRA access | Late test start | Track as open points; agree on a start date with the client |
| Proxy communication becomes a bottleneck | Slow feedback loops | Review the communication path regularly; move to direct contact if agreed |
| Unplanned test stops | Interrupted test flow | Keep the backlog of charters ready; resume quickly |
| Accidental access to non-test data | Privacy or trust issue | Stop, don't investigate, and report immediately via the proxy |
| Automated activities impair operation | Service disruption | No automation against the system without prior agreement |
| Students treat Pixture as a checklist only | Low-value findings | Encourage exploratory testing, personas, and critical thinking |

---

## 16. Form of Collaboration

- The collaboration between TBLL and the client is **free of charge** and based on a mutual **gentleman's agreement**.
- TBLL acts as **contractor** and Jack Doe as **client**. Explicitly, **no commercial contractual relationship** arises from this.
- The collaboration is based on mutual trust, responsible handling of the access and information provided, and the shared interest in:
  - a **practical learning gain** for the students, and
  - a **concrete quality gain** for Pixture.

---

## 17. Milestones

| Milestone | Expected Outcome |
|---|---|
| Assignment Agreed | Client and TBLL confirm this framework |
| Project Set-up | Test tenant, user roles, test accounts, test data, and JIRA access available |
| Project Kick-off | Shared understanding of objectives, scope, roles, and communication path |
| Test Plan Ready | Lean QQC test plan agreed within the team |
| Continuous Testing | Ongoing testing, reporting, and retesting along the ticket flow |
| Test Completion | Final team assessment delivered at a joint dinner in Vienna |

---

## 18. Project Assignment Summary

The assignment for QualityQuestConsulting is to test **Pixture** functionally and non-functionally **from the user's point of view**. Testing runs in a dedicated test tenant, through the user-facing web interfaces, and in a continuous, ticket-driven cadence.

The team has the freedom to choose its own test methods, and it is expected to look at Pixture critically. The result is not a confirmation that Pixture works, but an honest picture of its strengths, weaknesses, misunderstandings, and opportunities for improvement.

> **Main objective: Show what really works, what doesn't, and what users expect differently, so that Pixture becomes better for its users.**
