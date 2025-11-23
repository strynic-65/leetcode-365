# Notes – Remove Duplicates from Sorted Array (Q26)

## 🎯 Key Idea
Use the **Two Pointer Method**:

- `i` → slow pointer (position of last unique element)
- For each `num` in `nums`:
  - If it's the first element OR it's greater than the last unique element,
    then place it at `nums[i]` and increment `i`.

Because the array is sorted, duplicates will always appear next to each other.

---

## 💡 Why This Works
Sorted array means:  
All duplicates are consecutive → easy to skip.

We overwrite duplicates using the slow pointer.

---

## 🧠 Time & Space Complexity
- **Time:** O(n)
- **Space:** O(1)

Very efficient.

---

## 🧪 Example
nums = [1,1,2,2,3]

i = 0 → write 1  
i = 1 → write 2  
i = 2 → write 3

Final: [1,2,3,_ ,_]  
Return `i = 3`
