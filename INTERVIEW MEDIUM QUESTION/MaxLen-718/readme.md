## 718. Maximum Length of Repeated Subarray

Given two integer arrays nums1 and nums2, return the maximum length of a subarray that appears in both arrays.

## Example 1:

**Input**: nums1 = [1,2,3,2,1], nums2 = [3,2,1,4,7]
**Output**: 3
**Explanation**: The repeated subarray with maximum length is [3,2,1].
Example 2:

**Input**: nums1 = [0,0,0,0,0], nums2 = [0,0,0,0,0]
**Output**: 5
**Explanation**: The repeated subarray with maximum length is [0,0,0,0,0].

#### Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 100

### Use DP?

- Why dp here? DP is used to solve when there is a overlapping problem means we calculate specific calcuation again and again so instead of calculate we store them in a table and used them while calculating result

## Approach (Dynamic Programming)

1. Create a 2D DP table dp[n+1][m+1]

    - dp[i][j] = length of longest common subarray ending at nums1[i-1] and nums2[j-1].

2. Fill the DP table:

    - If nums1[i-1] == nums2[j-1],

            dp[i][j] = dp[i-1][j-1] + 1

    - else

            dp[i][j] = 0

3. Track the maximum value found in the table → this is the answer.

### Complexity

- Time: **O(n × m)** → because we compare each pair (i, j)

- Space: **O(n × m)** for 2D DP (can be optimized to O(min(n,m)) using rolling array)