## 3397. Maximum Number of Distinct Elements After Operations

You are given:

An integer array nums

An integer k

You can perform the following operation on each element at most once:

Add an integer in the range [-k, k] to that element.

Your goal is to maximize the number of distinct elements in the array after performing these operations.

### Example 1:

Input: nums = [1,2,2,3,3,4], k = 2

Output: 6

Explanation:

nums changes to [-1, 0, 1, 2, 3, 4] after performing operations on the first four elements.

- Each number nums[i] can be shifted to any value in the range [nums[i] - k, nums[i] + k].
We want to spread the elements apart as much as possible so that no two become equal.

## Key Idea:

1. Sort the array.

2. For each number, choose the smallest possible value in its range [num - k, num + k] that hasn’t been used yet.

3. Store chosen numbers in a set to ensure distinctness.