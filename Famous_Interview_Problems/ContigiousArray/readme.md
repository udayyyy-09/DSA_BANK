# 📘 Problem Statement

Find the maximum length of a contiguous subarray in a binary array where the number of 0s and 1s are equal.

---------------------------------------------------------------------------

# 🔧 Approach Summary

Use prefix sum + hash map by:
- Converting 0 → -1 to transform the problem into finding the longest subarray with sum = 0.

---------------------------------------------------------------------------

# ⚙️ Key Steps

1. Initialize:

    - sum = 0 (running prefix sum)
    - maxLen = 0 (result)
    - map<int, int> mp to store earliest index of each sum
    - Pre-fill: mp[0] = -1

2. Iterate through array:

    - Update sum += (nums[i] == 0 ? -1 : 1)
    - If sum seen → maxLen = max(maxLen, i - mp[sum])
    - Else → store mp[sum] = i

--------------------------------------------------------------

🧠 Time & Space Complexity
- Time: O(n)
- Space: O(n) (for map)

**Link** : "https://leetcode.com/problems/contiguous-array/"