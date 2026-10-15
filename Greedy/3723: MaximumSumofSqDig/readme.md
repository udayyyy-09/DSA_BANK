# LeetCode 3723: Maximize Sum of Squares of Digits

## Problem Statement
Given two positive integers `num` and `sum`, construct a good integer that:

- Contains exactly `num` digits.
- Has a digit sum equal to `sum`.
- Maximizes the sum of squared digits.

If multiple integers achieve the maximum score, return the largest integer as a string. If no valid integer exists, return an empty string.

## Approach: Greedy

### Intuition
To maximize the sum of squared digits, we should place as much of the available digit sum as possible into the largest digits.

Since every digit is between `0` and `9`, we greedily choose `min(9, sum)` for each position, starting from the leftmost digit.

This also produces the largest integer when multiple answers have the same score.

### Algorithm
1. If `sum > 9 * num`, return an empty string because the required digit sum is impossible.
2. Initialize an empty result string `res`.
3. Repeat `num` times:
   - Choose `digit = min(9, sum)`.
   - Append the digit to `res`.
   - Subtract the chosen digit from `sum`.
4. If `sum` is still greater than zero, return an empty string.
5. Otherwise, return `res`.

## C++ Solution

```cpp
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";

        string res = "";

        for (int i = 0; i < num; i++) {
            int digit = min(9, sum);
            res += char('0' + digit);
            sum -= digit;
        }

        if (sum > 0) return "";
        return res;
    }
};
```

## Example 1

**Input:** `num = 2, sum = 3`

**Output:** `"30"`

**Explanation:**

- First digit: `min(9, 3) = 3`. Remaining sum = `0`.
- Second digit: `min(9, 0) = 0`. Remaining sum = `0`.

The resulting number is `"30"`.

Its score is:

\[
3^2 + 0^2 = 9
\]

## Example 2

**Input:** `num = 2, sum = 10`

**Output:** `"91"`

**Explanation:**

- First digit: `min(9, 10) = 9`. Remaining sum = `1`.
- Second digit: `min(9, 1) = 1`. Remaining sum = `0`.

The score is:

\[
9^2 + 1^2 = 82
\]

## Complexity Analysis

- **Time Complexity:** `O(num)` because we process each digit once.
- **Space Complexity:** `O(num)` for the result string.

## Key Takeaways
- Use a greedy approach when the objective is to maximize the sum of squared digits.
- Each digit can be at most `9`.
- Place larger digits first to maximize the resulting integer when scores tie.
- Return an empty string if the required digit sum cannot be achieved.

**Pattern:** Greedy digit construction — maximize each leftmost digit while preserving the remaining sum needed for subsequent positions.
