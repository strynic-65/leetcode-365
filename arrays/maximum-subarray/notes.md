# Notes – Maximum Subarray (Q53)

##  Key Idea: Kadane’s Algorithm
We track two values:

- `currentSum` → best sum ending at current index  
- `maxSum` → best sum found so far  

Formula:
```
currentSum = max(num, currentSum + num)
maxSum = max(maxSum, currentSum)
```

---

##  Complexity
- Time: **O(n)**
- Space: **O(1)**

---

##  Example
nums = [-2,1,-3,4,-1,2,1,-5,4]
Maximum subarray = [4,-1,2,1] → Sum = 6

