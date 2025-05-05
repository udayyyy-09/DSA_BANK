📘 [Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=study-plan-v2&envId=leetcode-75)

Problem Statement:

Given an array of integers nums consisting of n elements, and an integer k, find a contiguous subarray of length exactly k that has the maximum average value, and return this value.
Any answer with a calculation error less than 10⁻⁵ will be accepted.

---------------------------------------------------------------------

🔍 Example
Input:

    nums = [1,12,-5,-6,50,3]
    k = 4

Output:

    12.75

Explanation:

The subarray [12, -5, -6, 50] has the maximum average of 12.75.

---------------------------------------------------------------------

✅ Approach

We use the Sliding Window Technique to efficiently find the maximum average:

1. Calculate the sum of the first k elements.

2. Slide the window across the array:
    Subtract the element going out of the window.
    Add the new element coming into the window.

3. Track the maximum sum and return maxSum / k.

---------------------------------------------------------------------

🧠 Complexity

Time Complexity: O(n)

Space Complexity: O(1)

---------------------------------------------------------------------

My Approach: https://leetcode.com/problems/maximum-average-subarray-i/solutions/6717058/optimal-approach-for-beginners-by-udayyy-089i

please do like on my solutions here: https://leetcode.com/u/udayyyy09/