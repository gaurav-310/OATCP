# Maximum bars : 
Sort Costs:
The sort function is applied to the costs array to arrange the ice cream costs in ascending order. This prioritizes purchasing the cheapest ice creams first.

Initialize Variables:
tot_bars: Tracks the total number of ice creams bought, initialized to 0.

Iterate Through Costs:
The algorithm iterates through the costs array using a for loop.

Buy Ice Cream (if affordable):
Within the loop, it checks if there's enough money (init_coins) to purchase the current ice cream (costs[i]).

If sufficient funds are not available:
Break out of the loop (The loop breaks because there's no budget left to buy more ice creams).

Else:
The ice cream is "bought" by deducting its cost from the remaining money (init_coins -= costs[i]).
The tot_bars counter is incremented to reflect the purchase.