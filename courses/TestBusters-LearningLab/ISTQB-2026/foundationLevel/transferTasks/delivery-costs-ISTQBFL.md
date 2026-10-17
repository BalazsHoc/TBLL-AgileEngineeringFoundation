# User story: Delivery cost calculation

The prices and rules below are proposed requirements, not claims about the current application.

As a customer,
I want to see the delivery cost for my order based on its destination, value, delivery speed, and contents,
so that I know the total delivery charge before placing my order.

## Acceptance criteria
### AC1 — Standard delivery fee
When standard delivery is selected, the base delivery fee is:

€5.00 for a domestic delivery address.
€15.00 for an international delivery address.

### AC2 — Free standard delivery threshold
For a domestic order with a merchandise subtotal of €50.00 or more, the standard base delivery fee is waived. 

### AC3 — Express delivery
When express delivery is selected, add €10.00 to the applicable delivery charge, whether the order is domestic or international and whether or not the standard base fee was waived.

