# Notes – Majority Element (Q169)

## 🎯 Key Idea: Moore's Voting Algorithm

We maintain:
- `count`
- `candidate`

Rules:
```
if count == 0 → candidate = current number
if current number == candidate → count++
else → count--
```

The candidate at the end is the majority element.

---

## 🧠 Complexity
- Time: **O(n)**
- Space: **O(1)**

This is the optimal solution.
