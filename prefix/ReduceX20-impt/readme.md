# LeetCode 1658 — Minimum Operations to Reduce X to Zero

🔗 [LeetCode Problem](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/)

## 💡 Approach

Instead of finding the elements to **remove** with sum `x`, find the **longest subarray to keep** whose sum is:

```text
target = totalSum - x
```

Why?

```text
Minimum operations
= Total elements - Maximum elements kept
```

Since all `nums[i] > 0`, we can use a **Sliding Window** to find the longest subarray with sum `target`.

## 🔑 Algorithm

1. Calculate `totalSum`.
2. Set `target = totalSum - x`.
3. Use two pointers (`left`, `right`) to find the longest subarray with sum `target`.
4. Return:

   ```text
   n - longestSubarrayLength
   ```
5. If no such subarray exists, return `-1`.

## ⏱ Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`

## 🧠 Key Pattern

**Remove from both ends → Convert into a longest subarray sum problem.**

```text
Total Sum - x
      ↓
Longest subarray to KEEP
      ↓
n - longest length
      ↓
Minimum operations
```
    