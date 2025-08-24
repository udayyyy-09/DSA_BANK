### 1493. Longest Subarray of 1's After Deleting One Element

Given a binary array nums, you should delete one element from it.

Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

### Example 1:

- Input: nums = [1,1,0,1]
Output: 3
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.
Example 2:

- Input: nums = [0,1,1,1,0,1,1,0,1]
Output: 5
Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].
Example 3:

- Input: nums = [1,1,1]
Output: 2
Explanation: You must delete one element.

### Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.

## Approach

- This question also follow pattern like other sliding window problem in which I used for loop and inside it while loop with change condition only. 

- Since in this question we need longest 1 by skipping 0 so we take two pointer **left** and **right** 

- Start iterating, when we found 0 exceed more then 1 we started to shrink the window as we can skip one zero at a time

- Each iteration we find max len 