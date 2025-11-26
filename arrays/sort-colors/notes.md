# Notes – Sort Colors (Q75)

## 🎯 Key Idea: Dutch National Flag Algorithm
Use **three pointers**:

- `low` → boundary for 0s
- `mid` → current pointer
- `high` → boundary for 2s

Rules:
```
if nums[mid] == 0 → swap(low, mid), low++, mid++
if nums[mid] == 1 → mid++
if nums[mid] == 2 → swap(mid, high), high--
```

---

## 🧠 Complexity
- Time: **O(n)**
- Space: **O(1)**

---

## 🧪 Example
Input:  [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
