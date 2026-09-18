# LeetCode 1477 — Find Two Non-overlapping Sub-arrays Each With Target Sum

🔗 **LeetCode:** [1477. Find Two Non-overlapping Sub-arrays Each With Target Sum](https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/?envType=daily-question&envId=2026-09-17)

**Difficulty:** Medium
**Topics:** Sliding Window, Two Pointers, Prefix Minimum, Arrays

---

## Problem

You are given an array `arr` of positive integers and an integer `target`.

You need to find **two non-overlapping subarrays** such that:

* Each subarray has a sum equal to `target`.
* The two subarrays must not overlap.
* The sum of their lengths should be minimum.

Return the minimum possible sum of their lengths.

If no such two subarrays exist, return `-1`.

### Example

```text
Input:
arr = [7,3,4,7]
target = 7

Output:
2
```

The valid subarrays are:

```text
[7]       → length 1
[3,4]     → length 2
[7]       → length 1
```

The best choice is:

```text
[7] + [7]

1 + 1 = 2
```

---

## Key Observation

All elements satisfy:

```text
arr[i] >= 1
```

Because all elements are **positive**, we can use a **Sliding Window**.

When the current window sum becomes greater than `target`, we move the left pointer forward until:

```text
sum <= target
```

Whenever:

```text
sum == target
```

we have found a valid subarray.

However, finding valid subarrays alone is not enough.

We need **two non-overlapping** subarrays.

So for every valid current subarray, we need to know:

> What is the shortest valid subarray that appears completely before the current subarray?

---

## Approach

We maintain:

```cpp
best[i]
```

where:

```text
best[i] = minimum length of a valid subarray
          found in arr[0...i]
```

Suppose the current valid subarray is:

```text
[left ... right]
```

Its length is:

```cpp
right - left + 1
```

To make sure another subarray does not overlap with it, we can only use a subarray ending before `left`.

Therefore, we check:

```cpp
best[left - 1]
```

If it exists:

```cpp
answer = min(answer, currentLength + best[left - 1])
```

This guarantees that the two subarrays are non-overlapping.

---

## Algorithm

1. Initialize:

   * `left = 0`
   * `sum = 0`
   * `minLen = INT_MAX`
   * `ans = INT_MAX`
   * `best[]` with `INT_MAX`

2. Move `right` from `0` to `n - 1`.

3. Add `arr[right]` to `sum`.

4. While:

```cpp
sum > target
```

remove elements from the left.

5. If:

```cpp
sum == target
```

then we found a valid subarray.

6. Calculate its length:

```cpp
len = right - left + 1
```

7. Check whether there is a previous non-overlapping subarray:

```cpp
best[left - 1]
```

8. Update the answer.

9. Update the shortest valid subarray seen so far.

10. Return `-1` if no valid pair exists.

---

## C++ Solution

```cpp
class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {

        int n = arr.size();

        vector<int> best(n, INT_MAX);

        int left = 0;
        int sum = 0;

        int ans = INT_MAX;
        int minLen = INT_MAX;

        for (int right = 0; right < n; right++) {

            sum += arr[right];

            // Shrink window if sum exceeds target
            while (sum > target) {
                sum -= arr[left];
                left++;
            }

            // Found a valid subarray
            if (sum == target) {

                int len = right - left + 1;

                // Check for a previous non-overlapping subarray
                if (left > 0 && best[left - 1] != INT_MAX) {
                    ans = min(ans, len + best[left - 1]);
                }

                // Update shortest valid subarray
                minLen = min(minLen, len);
            }

            best[right] = minLen;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
```

---

## Dry Run

Consider:

```text
arr = [8,4,3,7,7]
target = 7
```

### Step 1

```text
8
```

`8 > 7`, so remove `8`.

```text
sum = 0
```

---

### Step 2

Add `4`:

```text
sum = 4
```

No valid subarray.

---

### Step 3

Add `3`:

```text
sum = 7
```

We found:

```text
[4,3]
```

Length:

```text
2
```

So:

```text
minLen = 2
best[2] = 2
```

---

### Step 4

Add `7`:

```text
sum = 14
```

Shrink the window:

```text
14 - 4 = 10
10 - 3 = 7
```

Current window:

```text
[7]
```

Length:

```text
1
```

There is a previous valid subarray:

```text
best[2] = 2
```

Therefore:

```text
2 + 1 = 3
```

So:

```text
ans = 3
```

But now:

```text
minLen = 1
best[3] = 1
```

---

### Step 5

Add the final `7`:

```text
sum = 14
```

Remove the previous `7`:

```text
sum = 7
```

Current window:

```text
[7]
```

Length:

```text
1
```

Previous best:

```text
best[3] = 1
```

Therefore:

```text
1 + 1 = 2
```

Update:

```text
ans = 2
```

Final result:

```text
2
```

The two selected subarrays are:

```text
[7] + [7]

1 + 1 = 2
```

---

## Why `best[left - 1]`?

This is the most important part of the problem.

Suppose the current subarray is:

```text
[left ........ right]
```

We cannot use a previous subarray that ends at or after `left`.

It must end before `left`:

```text
previous subarray     current subarray
      ↓                     ↓
[........]             [left........right]
```

Therefore:

```cpp
best[left - 1]
```

gives us the shortest valid subarray that is guaranteed not to overlap with the current one.

---

## Complexity

### Time

```text
O(n)
```

The `left` and `right` pointers each move forward at most `n` times.

### Space

```text
O(n)
```

for the `best` array.

---

## Pattern to Remember

When you see:

> Find two non-overlapping subarrays with a target sum and minimize their total length.

Think:

```text
Positive elements
       ↓
Sliding Window
       ↓
Find subarray with target sum
       ↓
Store shortest previous valid subarray
       ↓
Combine with cu
```
