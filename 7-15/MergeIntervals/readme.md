## 📝 Problem: Merge Intervals

Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals and return a new array of non-overlapping intervals that cover all the input intervals.

### 💡 Approach

- Sort the intervals by start time.

- Track current interval with mini (start) and maxi (end).

- Traverse all intervals:

- If the current interval overlaps (maxi >= next_start), update maxi = max(maxi, next_end).

- Otherwise, push {mini, maxi} into the result and reset mini, maxi to the new interval.

- At the end, push the last {mini, maxi}.

### ⏱️ Complexity

    - Time: O(n log n) (due to sorting).

    - Space: O(n) (for result storage).