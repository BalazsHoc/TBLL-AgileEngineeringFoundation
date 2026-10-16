# MASTER PROMPT: Holistic Test Automation with AI

## Your Role

Act as an expert team consisting of:

- Senior Instructional Designer for professional adult education
- Agile Testing Expert specializing in the Holistic Testing Model by Lisa Crispin and Janet Gregory
- Test Automation Architect with deep experience in the ISTQB General Test Automation Archtecture 
- Generative AI and Agentic AI Engineer
- Agile Engineering Coach
- Learning Experience Designer specializing in practical, hands-on training according to the C4 model from Learning from the Back of the Room

Your assignment is to design a comprehensive, practice-oriented training course called:

**Holistic Test Automation with AI**

This course is part of an enterprise AI education program and represents a specialization following the general AI Green Belt training.

The training consists of 3 moduls, each modul consist of 3 days where 2 days are for the course. The first half day 1 is always for travelling, the 2nd half day of day 3 is also for travelling. 

Each learning lesson has a lenght of 50 minute, followd by a 10 minute break.

Between the moduls we have always 4 weeks where the participants works on homeworks. The homework is to create and implement the first draft of the test automation strategy for their product they are working in RBI.

## 1. Course Context

All participants have successfully completed an AI Green Belt course.

They already understand:

- AI and Generative AI fundamentals
- Large Language Models
- Prompt engineering
- Practical usage of AI assistants
- AI opportunities, limitations, and risks

Do not repeat this foundational knowledge unless it is required for a specific testing activity.

Participants come from different professional backgrounds, including Scrum Masters, Product Owners, Business Analysts, Agile Coaches, Software Testers, and Developers.

Some participants have no programming experience.

The course must enable these participants to become citizen test automation practitioners, capable of supporting software quality through AI-assisted testing and basic automation.

## 2. Main Learning Goal

The primary learning objective is:

**Design and implement a basic test automation strategy.**

By the end of the course, participants must be able to:

1. Explain the purpose of testing activities throughout the software development lifecycle.
2. Apply the Holistic Testing Model to identify relevant testing activities.
3. Understand how traditional automation and AI can support those activities.
4. Perform selected testing activities manually.
5. Perform the same activities using Generative AI.
6. Develop reusable prompts and AI skills for testing activities.
7. Design simple agentic workflows for selected testing tasks.
8. Evaluate the reliability and quality of AI-generated testing results.
9. Decide when manual testing, deterministic automation, AI assistance, or agentic automation is appropriate.
10. Design and implement a basic, risk-based test automation strategy.

The emphasis must be on practical engineering capabilities, not just theoretical understanding.

## 3. Primary Framework: Holistic Testing Model

Use the Holistic Testing Model by Lisa Crispin and Janet Gregory as the central framework for the entire course.

Research the model using authoritative sources and preserve its actual terminology, structure, principles, and relationships.

Do not invent stages or attribute additional concepts to the authors.

Organize the course around the stages or areas represented in the model.

For each stage or area:

- Explain its purpose.
- Identify relevant testing activities.
- Select at least one representative activity for practical training.
- Explain how the activity contributes to software quality.
- Identify opportunities for automation in testing.
- Explain how AI can support or improve the activity.
- Identify limitations, risks, and human responsibilities.

Emphasize that holistic testing covers much more than automated test execution.

Testing includes discovery, collaboration, risk analysis, planning, design, implementation, execution, feedback, and continuous learning.

Use the model to establish a continuous quality engineering perspective.

## 4. Mandatory Learning Pattern for Every Activity

For every selected testing activity, apply the following instructional sequence.

### Phase A: Understand the Activity

Explain:

- What is the testing activity?
- Why is it necessary?
- When does it take place?
- Who participates?
- What inputs are required?
- What outputs are expected?
- What risks does it address?
- How does it contribute to the overall test automation strategy?

Use realistic examples.

### Phase B: Perform the Activity Manually

Create a hands-on exercise where participants perform the testing activity without Generative AI.

Provide:

- Business scenario
- Input artifacts
- Step-by-step instructions
- Expected deliverables
- Evaluation criteria

The purpose is to understand the activity, its complexity, and the decisions involved.

Participants should experience the manual effort before introducing AI.

### Phase C: Perform the Activity with AI Prompting

Participants repeat the activity using an AI assistant.

Provide:

- A prompting strategy
- Example prompts
- Required context
- Expected outputs
- Validation instructions
- Typical AI mistakes

Participants compare the results with their manual work.

Discuss improvements in speed, quality, completeness, and consistency.

Also identify new risks introduced by AI.

### Phase D: Develop a Reusable AI Skill

Where appropriate, participants transform the successful prompting approach into a reusable AI skill.

The skill should define:

- Purpose
- Inputs
- Instructions
- Constraints
- Expected outputs
- Validation criteria
- Error handling

Explain how reusable skills differ from individual prompts.

Participants should create and test a small library of AI skills that support different testing activities.

### Phase E: Introduce Agentic Automation

Where appropriate, extend the activity into a simple agent or agentic workflow.

Explain:

- Agent responsibilities
- Workflow steps
- Required tools
- Data and context
- Inputs and outputs
- Human approval points
- Validation mechanisms
- Risks and limitations

Demonstrate how multiple skills or activities can be combined into a workflow.

Do not force every activity to use an AI agent. Explain when a prompt, reusable skill, traditional automation, or agent is the better engineering choice.

### Phase F: Compare and Reflect

For every activity, compare:

| Criterion | Manual | AI Prompting | AI Skill | AI Agent |
|---|---|---|---|---|
| Required effort | | | | |
| Result quality | | | | |
| Repeatability | | | | |
| Maintainability | | | | |
| Human involvement | | | | |
| Risks | | | | |
| Value | | | | |

Participants must reflect on the value and limitations of each approach.

Every activity should contribute an artifact, decision, or automation component to the final test automation strategy.

## 5. Continuous Case Study

Use the ToolShopapplication throughout the entire course. See Continuous Case Study: ToolShop Czech Market Expansion 

Prefer a digital banking application, such as an online loan application or account-opening workflow.

The case study should contain:

- Business requirements
- User stories
- Acceptance criteria
- Quality risks--
- Functional and non-functional requirements
- UI workflows
- APIs
- Test data
- Sample defects
- Testing environments

The application should be simple enough for beginners but sufficiently realistic for experienced professionals.

Every module must build upon the previous modules.

At the end, participants should have developed a coherent set of testing artifacts and automation components for the same application.

## 6. Testing Activities

Identify representative testing activities for each stage or area of the Holistic Testing Model.

Consider the following activities where they fit the model:

- Requirements analysis
- Identifying ambiguities
- Quality risk analysis
- Acceptance criteria refinement
- Test scenario identification
- Test case design
- Test data generation
- Test environment preparation
- API test automation
- UI test automation
- Exploratory testing support
- Defect analysis
- Test result analysis
- Test reporting
- Automation maintenance
- Continuous improvement

These are candidate activities, not official stage names.

Select activities based on their educational value, relevance to the model, and contribution to the final learning objective.

For every activity, identify the most appropriate automation approach.

Distinguish clearly between:

1. Manual testing activities
2. Traditional deterministic automation
3. AI-assisted testing
4. AI-driven agentic automation

## 7. Progressive AI Engineering Capabilities

Design the learning journey to increase participants' AI engineering capabilities progressively.

**Level 1: Prompting**

Participants use AI to support individual testing activities.

**Level 2: Reusable Skills**

Participants standardize and reuse successful AI-supported testing procedures.

**Level 3: Agentic Workflows**

Participants combine skills, tools, and automated steps into controlled workflows.

Each level must build on the previous one.

Provide concrete examples and hands-on exercises.

The course must explain when increased automation complexity is justified.

## 8. Final Capstone Project

Participants must design and implement a basic test automation strategy for the continuous case-study application.

The final deliverables must include:

- A basic quality risk analysis
- Testing activities mapped to the Holistic Testing Model
- A prioritized list of automation candidates
- Decisions about manual versus automated testing
- A basic automation architecture
- At least one working automated test or automation component
- A collection of validated AI prompts
- At least one reusable AI skill
- A simple agentic workflow, where feasible
- Human oversight and validation mechanisms
- A basic maintenance and improvement approach

The capstone should demonstrate that participants can make informed automation decisions, not simply generate scripts with AI.

## 9. Course Design Requirements

Design the course for a mixed technical and non-technical audience.

Apply the following principles:

- Learning by doing
- Manual understanding before AI assistance
- Progressive complexity
- One continuous case study
- Practical, measurable learning outcomes
- Human accountability for AI results
- Risk-based automation decisions
- Realistic enterprise applicability
- Reusable outcomes for participants' daily work

Use Bloom's Taxonomy to formulate measurable learning objectives.

Apply constructive alignment between learning objectives, exercises, and assessment.

Prefer hands-on exercises over theoretical lectures.

Provide differentiated exercise options for participants with and without programming experience.

## 10. Required Deliverables

Produce the course design in the following order.

### Deliverable 1: Course Blueprint

Include:

- Course title and description
- Target audience
- Prerequisites
- Main learning objective
- Detailed learning outcomes
- Recommended duration
- Module structure
- Learning progression
- Assessment approach

### Deliverable 2: Holistic Testing Activity Matrix

Create a matrix with the following columns:

| Holistic Testing Stage/Area | Testing Activity | Manual Exercise | AI Prompting | AI Skill | AI Agent | Automation Value | Learning Outcome |
|---|---|---|---|---|---|---|---|

Ensure that the stages or areas correspond accurately to the original model.

### Deliverable 3: Detailed Course Modules

For every module provide:

- Title
- Duration
- Learning objectives
- Related Holistic Testing stage or area
- Testing concepts
- Manual exercise
- AI prompting exercise
- AI skill development
- Agentic automation opportunity
- Required tools
- Input materials
- Expected deliverables
- Assessment criteria

### Deliverable 4: Practical Exercise Package

For each exercise provide:

- Scenario
- Learning objective
- Required inputs
- Manual instructions
- AI-supported instructions
- Example prompts
- Expected results
- Validation checklist
- Reflection questions
- Facilitator notes

### Deliverable 5: Capstone Assessment

Provide:

- Project instructions
- Required deliverables
- Acceptance criteria
- Scoring rubric
- Practical demonstration requirements
- Criteria for successful course completion

### Deliverable 6: Trainer Guide

Provide:

- Preparation instructions
- Recommended timings
- Demonstration guidance
- Common participant challenges
- Alternative exercises for non-programmers
- Discussion questions
- Sample solutions

## 11. Quality Requirements

Before presenting the course, verify that:

- The Holistic Testing Model is represented accurately.
- Every relevant stage or area contains at least one practical testing activity.
- Each selected activity starts with manual execution before AI support.
- AI prompting, skills, and agents are introduced progressively.
- The course does not confuse test automation with automated test execution.
- Participants develop an actual automation strategy.
- Participants implement at least one working automation component.
- The exercises build toward the final capstone.
- The course is accessible to Green Belt graduates without prior programming experience.
- AI-generated results are always evaluated critically.

## 12. Working Instructions

Do not generate the entire course immediately.

Start with:

1. A recommended overall course structure.
2. A mapping of the Holistic Testing Model to suitable testing activities.
3. A proposed module sequence.
4. Estimated duration per module.
5. A description of the continuous case study.
6. A description of the final capstone project.

Provide two possible course durations:

- Compact version
- Extended hands-on version

Explain the trade-offs.

Then stop and wait for my feedback before developing the detailed course content.

## Continuous Case Study: ToolShop Czech Market Expansion

Replace the fictional case study with the real open-source learning application ToolShop (Practice Software Testing).

Source repository:
https://github.com/testsmith-io/practice-software-testing

Target implementation:
https://github.com/testsmith-io/practice-software-testing/tree/main/sprint5-holtesting

### Business Mission

Participants become members of an agile product team responsible for making ToolShop ready for the Czech market.

The training must simulate one or more realistic Scrum sprints.

The `sprint5-holtesting` implementation represents the intended target state. Analyze this implementation and identify its actual features, behavior, and differences from the selected starting version.

Do not assume that particular localization features already exist without verifying them.

### Sprint-Based Learning

Design the course as a simulated agile delivery project.

Each sprint must include:

1. Sprint Goal
2. Business context
3. Product Backlog Items
4. User Stories and Acceptance Criteria
5. Relevant Holistic Testing activities
6. Manual testing exercises
7. AI-assisted testing exercises
8. Automation opportunities
9. Working automation deliverables
10. Sprint Review and Retrospective

### Holistic Testing Integration

Use the Holistic Testing Model by Lisa Crispin and Janet Gregory throughout every sprint.

Do not treat the model as a waterfall process or assume that each sprint corresponds to only one stage.

Select meaningful activities from Discover, Plan, Understand, Build, Deploy, Release, Observe, and Learn.

Participants should experience how these activities interact within an agile sprint.

### Manual First, AI Second

For each selected testing activity:

1. Explain the testing concept.
2. Let participants perform the activity manually.
3. Repeat the activity with AI prompting.
4. Compare and evaluate the results.
5. Where valuable, develop a reusable AI skill.
6. Where justified, introduce an AI agent or agentic workflow.
7. Decide how the activity contributes to the automation strategy.

### Technical Environment

Use ToolShop's actual application architecture, REST API, Swagger documentation, and available testing infrastructure.

Prefer existing frameworks and infrastructure where suitable.

Provide a preconfigured environment for participants without programming experience.

Use synthetic test data and isolated training environments.

Before designing implementation exercises, inspect the repository's setup instructions, licensing restrictions, sprint structure, and available automation tools.

### Target State

The goal is not necessarily to reproduce the target implementation line by line.

The goal is to create a defensible, tested, and partially automated solution for the Czech market.

Use `sprint5-holtesting` as a reference implementation for instructor evaluation and comparison.

### Final Capstone

Each team presents:

- The Czech-market quality risks.
- Their basic test automation strategy.
- The selected automation candidates.
- Evidence of manual and AI-assisted testing.
- Working automated checks.
- At least one reusable AI skill.
- An agentic workflow prototype, where feasible.
- A release-readiness assessment.
- Lessons learned from the sprint simulation.

Assess participants primarily on the quality of their testing decisions, validation of AI output, working automation, and understanding of holistic testing.