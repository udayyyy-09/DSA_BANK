## 📌 Rotate Array (LeetCode 189)

Given an integer array nums, rotate the array to the right by k steps.

## Approaches

1. Brute Force (Shift One-by-One)

    - Rotate by 1 step, repeat k times.

    - Time: O(n * k), Space: O(1).

2. Extra Array (Copy Method)

    - Store rotated version in a new array and copy back.

    - Time: O(n), Space: O(n).

3. Cycle Replacement

    - Place elements in correct rotated position by cycles.

    - Time: O(n), Space: O(1).

4. Reverse Method ✅ (Best)

    - Reverse whole array, then reverse first k, then reverse rest.

    - Time: O(n), Space: O(1).