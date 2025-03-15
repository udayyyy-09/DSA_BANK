📌 Two Sum 

Problem Statement

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to the target.

Example

Input:

        nums = [2, 7, 11, 15]
        target = 9

Output:

        [0, 1]

--------------------------------------------------------------------------------------------------------------------

✅ Approaches

1️⃣ Brute Force Approach (O(N²))

Idea: Check all pairs (i, j) and return if nums[i] + nums[j] == target.

Implementation: Use two nested loops.

Time Complexity: O(N²)
Space Complexity: O(1)

2️⃣ Hash Map Approach (O(N)) - Optimal

Idea: Use a hash map to store elements and check for target - nums[i].

Implementation:
Iterate through the array.
For each element, check if target - nums[i] exists in the hash map.

If found, return the indices. Otherwise, store that nums[i] element in the hash map.

Time Complexity: O(N)
Space Complexity: O(N)

--------------------------------------------------------------------------------------------------------------------

🔗 Related Problems

This problem follows a common pattern used in many other problems:

1. Two Sum II (Sorted Array, Two Pointers) - [LeetCode 167](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted?envType=study-plan-v2&envId=top-interview-150)

2. 3Sum (Three Numbers Sum to Target) - [LeetCode 15](https://leetcode.com/problems/3sum)

3. 4Sum (Four Numbers Sum to Target) - [LeetCode 18](https://leetcode.com/problems/4sum)

4. Subarray Sum Equals K (Using Prefix Sum & Hash Map) - [LeetCode 560](https://leetcode.com/problems/subarray-sum-equals-k)

--------------------------------------------------------------------------------------------------------------------

🔔 We are going to cover up all this question in this problem folder📂. So, Stay tune !

--------------------------------------------------------------------------------------------------------------------

✨Contact: 

Email: udaychaudhary419@gmail.com

LinkedIn: https://www.linkedin.com/in/uday-chaudhary-b24b08290/
