## 📌 Problem: Shortest Subarray with Even Sum (Length ≥ k)

**Description:**

You are given an integer array nums and an integer k.

Your task is to find the length of the shortest subarray such that:

The sum of the subarray is even, and The subarray length is at least k.

If no such subarray exists, return -1.

**Example 1**

        Input: nums = [1, 2, 3, 4], k = 2
        Output: 2
        Explanation:
        Subarray [2, 3] has sum = 5 (odd) ❌
        Subarray [3, 4] has sum = 7 (odd) ❌
        Subarray [1, 2] has sum = 3 (odd) ❌
        Subarray [2, 3, 4] has sum = 9 (odd) ❌
        Subarray [1, 2, 3] has sum = 6 (even ✅, length = 3)
        Answer = 3

#### Constraints

    - 1 <= nums.length <= 10^5

    - -10^4 <= nums[i] <= 10^4

    - 1 <= k <= nums.length