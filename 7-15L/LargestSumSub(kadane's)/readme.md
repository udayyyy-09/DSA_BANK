## 📌 Maximum Subarray (LeetCode 53)

![alt text](<Screenshot 2025-09-23 at 9.29.56 PM.png>)


Problem

Find the contiguous subarray with the largest sum.

## Approaches

1. Kadane’s Algorithm ✅

    - Keep running sum, reset to 0 if it drops below 0.

    - Time: O(n), Space: O(1).

2. Dynamic Programming

    - dp[i] = max(nums[i], nums[i] + dp[i-1]).

    - Answer = max over dp[i].

    - Time: O(n), Space: O(n).

3. Divide and Conquer (less used)

    - Split array into halves, combine results.

    - Time: O(n log n).