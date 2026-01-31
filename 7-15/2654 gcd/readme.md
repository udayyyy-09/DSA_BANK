# 2654. Minimum Number of Operations to Make All Array Elements Equal to 1

You are given a 0-indexed array nums consisting of positive integers. You can do the following operation on the array any number of times:

Select an index i such that 0 <= i < n - 1 and replace either of nums[i] or nums[i+1] with their gcd value.
Return the minimum number of operations to make all elements of nums equal to 1. If it is impossible, return -1.

The gcd of two integers is the greatest common divisor of the two integers.

# Example 1:

            Input: nums = [2,6,3,4]
            Output: 4
            Explanation: We can do the following operations:
            - Choose index i = 2 and replace nums[2] with gcd(3,4) = 1. Now we have nums = [2,6,1,4].
            - Choose index i = 1 and replace nums[1] with gcd(6,1) = 1. Now we have nums = [2,1,1,4].
            - Choose index i = 0 and replace nums[0] with gcd(2,1) = 1. Now we have nums = [1,1,1,4].
            - Choose index i = 2 and replace nums[3] with gcd(1,4) = 1. Now we have nums = [1,1,1,1].

# Example 2:

            Input: nums = [2,10,6,14]
            Output: -1
            Explanation: It can be shown that it is impossible to make all the elements equal to 1.
 

# Constraints:

- 2 <= nums.length <= 50
- 1 <= nums[i] <= 106
 
# Approach

- first we check if there's one in the array or not. If found then we can make all the elem == 1 because gcd(num,1) == 1. Hence we will return n - countof1's.

- If 1 not found then we will find the 1st subrray with gcd() == 1. Ex: [6,2,15] we take two loops and compare 6 with all pairs. Similarly for 2 also

- after finding shorted subrray if found then simple we will return total mini operations by the forumla i.e. (j-i) + (n-1)

- if 1 not found return -1

- edge cases: 
    - if [1,1,1] then opr ==