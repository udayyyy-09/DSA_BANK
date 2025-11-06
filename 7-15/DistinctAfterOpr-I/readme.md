## 3346. Maximum Frequency of an Element After Performing Operations I

##### You’re given:

    - An integer array nums

    - Two integers k and numOperations

##### You can perform up to numOperations operations, where in each operation:

    - Choose an index i (not chosen before)

    - Add any integer in range [-k, k] to nums[i]

##### Goal → find the maximum possible frequency of any element after performing the operations optimally.

#### 💡 Intuition

    - Each number can move within range [num - k, num + k].
    - If two ranges overlap, those numbers can be made equal with some operations.
    - We find how many numbers can overlap for any possible value.

#### 🧩 Approach (Prefix + Frequency)

1. Find the maximum element maxEle.

2. Build a freq array → count occurrences of each number.

3. Build a prefix sum prefix[i] → total numbers ≤ i - 1.

4. For each possible target value i:

    - Define range [i - k, i + k].

    - Find how many numbers lie in this range using prefix difference.

    - Compute how many can be converted into i using available operations.

    - Track the maximum achievable frequency.

#### ⏱️ Complexity

    - Time: O(max(nums))

    - Space: O(max(nums))