# 448. Find All Numbers Disappeared in an Array

Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

        Example 1:

        Input: nums = [4,3,2,7,8,2,3,1]
        Output: [5,6]
        Example 2:

        Input: nums = [1,1]
        Output: [2]
 

### Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
 

#### **Follow up:* Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

### Approach

You can easily do this question by taking extra space right but you need to solve this question without taking extra space

- Optimized Approach

    1. Use the array itself to mark presence by negating the value at index abs(nums[i]) - 1 for each element.

    2. After marking, any index i with a positive value means number i + 1 is missing.

    3. Collect all such i + 1 into the result array.