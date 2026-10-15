# LeetCode 2333: Minimum Sum of Squared Difference

## Problem Statement
Given two integer arrays `nums1` and `nums2` of equal length, along with two integers `k1` and `k2`, minimize the sum of squared differences between corresponding elements after performing at most `k1 + k2` operations.

In each operation, we can increase or decrease any element of either array by `1`.

The objective is to minimize:

\[
\sum_{i=0}^{n-1} (nums1[i]-nums2[i])^2
\]

## Approach: Greedy + Frequency Array

### Intuition
To minimize the sum of squared differences, we should reduce the **largest absolute differences first** because larger differences contribute more to the final sum.

Instead of repeatedly finding the maximum difference using a priority queue, we use a frequency array to count how many times each difference occurs.

### Algorithm
1. Calculate the absolute difference between corresponding elements and store the maximum difference in `maxiDiff`.
2. Build a frequency array `freq`, where `freq[d]` represents the number of elements with difference `d`.
3. Start from `maxiDiff` and process differences in descending order.
4. If the remaining operations are enough to reduce all differences at the current level by `1`:
   - Subtract the required operations.
   - Move their frequency to the next lower difference.
   - Set the current frequency to `0`.
5. Otherwise, reduce only as many elements as the remaining operations allow, move those elements to the next lower difference, and stop.
6. Calculate the final sum of squared differences using the frequency array.

## C++ Solution

```cpp
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2,
                               int k1, int k2) {
        int n = nums1.size();
        long long res = 0;
        long long opr = 1LL * k1 + k2;
        int maxiDiff = 0;
        vector<int> diff;

        for (int i = 0; i < n; i++) {
            int dif = abs(nums1[i] - nums2[i]);
            diff.push_back(dif);
            maxiDiff = max(maxiDiff, dif);
        }

        vector<long long> freq(maxiDiff + 1, 0);

        for (int val : diff) {
            freq[val]++;
        }

        // Reduce the largest differences first
        for (int i = maxiDiff; i > 0 && opr > 0; i--) {
            if (opr >= freq[i]) {
                opr -= freq[i];
                freq[i - 1] += freq[i];
                freq[i] = 0;
            } else {
                freq[i - 1] += opr;
                freq[i] -= opr;
                opr = 0;
            }
        }

        // Calculate the sum of squared differences
        for (int i = 0; i <= maxiDiff; i++) {
            res += freq[i] * i * i;
        }

        return res;
    }
};
```

## Complexity Analysis

Let `n` be the array length and `M` be the maximum absolute difference.

- **Time Complexity:** `O(n + M)`
  - Calculating differences and building frequencies takes `O(n)`.
  - Processing the frequency array and calculating the result takes `O(M)`.

- **Space Complexity:** `O(n + M)`
  - The `diff` vector uses `O(n)` space.
  - The frequency array uses `O(M)` space.

## Key Takeaways
- Use a greedy strategy when reducing the largest differences gives the greatest benefit.
- A frequency array can replace a max heap when the range of values is small and bounded.
- Store the operation count and result in `long long` to avoid overflow.
- Always move reduced elements into `freq[i - 1]`; simply decreasing `freq[i]` would lose track of those elements.
