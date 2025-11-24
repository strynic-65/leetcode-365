# Notes – Best Time to Buy and Sell Stock (Q121)

### Idea:
We track:
- the **minimum price** seen so far
- the **maximum profit** we can gain by selling at current price

### Logic:
profit = price[i] - minPriceSoFar

### Complexity:
- Time: O(n)
- Space: O(1)
