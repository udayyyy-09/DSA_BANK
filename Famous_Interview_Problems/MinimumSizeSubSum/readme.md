🚀 Problem: Minimum Size Subarray Sum
--------------------------------------------------------------------------------------------------------------

Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray of which the sum is greater than or equal to target. If there is no such subarray, return 0.

--------------------------------------------------------------------------------------------------------------

🧠 Problem Type

Sliding Window (Variable Size)

Two Pointer Technique

--------------------------------------------------------------------------------------------------------------

🧩 Constraints

1 <= nums.length <= 10⁵

1 <= nums[i] <= 10⁴

1 <= target <= 10⁹

--------------------------------------------------------------------------------------------------------------

🔍 Example

        Input: target = 7, nums = [2,3,1,2,4,3]
        Output: 2
        Explanation: The subarray [4,3] has the minimum length under the problem constraint.

--------------------------------------------------------------------------------------------------------------

⚙️ Approach: Sliding Window (Two Pointer)

1. Initialize

    🔘start = 0, sum = 0, minLen = INT_MAX.

2. Expand the window by moving end pointer and adding nums[end] to the sum.

3. Shrink the window while sum >= target:

    🔘Update the minimal length.
    🔘Subtract nums[start] and move start forward.

4. Return

    🔘0 if minLen was never updated (no valid subarray found).
    🔘 Otherwise, return minLen.

-----------------------------------------------------------------------------------------------------------------

Feel free to ask anything or share your thoughts! 😊

Email: udaychaudhary419@gamil.com

linkedin: https://www.linkedin.com/in/uday-chaudhary-b24b08290/
