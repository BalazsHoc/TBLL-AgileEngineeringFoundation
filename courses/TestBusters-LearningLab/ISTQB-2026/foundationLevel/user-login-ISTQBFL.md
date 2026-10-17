# User story: Protect user accounts from repeated failed login attempts

As a registered user,  
I want my account protected from repeated unsuccessful login attempts,  
so that unauthorized users cannot continue trying to access it.

## Account states

- **ENABLED** — the user may log in with correct credentials.
- **LOCKED** — the user cannot log in; only an administrator can enable the account.
- **DISABLED** — the user cannot log in, even with correct credentials.

## Acceptance criteria

### AC1 — Successful login for an enabled user
Given the account is **ENABLED**  
And the user enters correct credentials  
When the user submits the login form  
Then the user is logged in.

### AC2 — Failed login for an enabled user
Given the account is **ENABLED**  
When the user submits incorrect credentials  
Then the login is rejected.

### AC3 — Lock after three consecutive failed logins
Given the account is **ENABLED**  
When the user submits incorrect credentials for the third consecutive login attempt  
Then the account state changes to **LOCKED**  
And the user is not logged in.

### AC4 — Login is blocked while locked
Given the account is **LOCKED**  
When the user attempts to log in, including with correct credentials  
Then the login is rejected.

### AC5 — Administrator enables a locked account
Given the account is **LOCKED**  
When an administrator enables the account  
Then the account state changes to **ENABLED**.

### AC6 — Disabled users cannot log in
Given the account is **DISABLED**  
When the user attempts to log in with correct credentials  
Then the login is rejected.

## State diagram
see: user-login-istqb-state-diagram.jpg