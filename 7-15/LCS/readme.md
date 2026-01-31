## 128. Longest Consecutive Sequence

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

### LeetCode expects the HashSet + streak expansion method:

- Put all numbers in an unordered_set (O(n)).

- For each number, only start a streak if it’s the beginning of a sequence (num - 1 not in set).

- Count how long the streak goes (num+1, num+2, …).

##### Example 1:

        Input: nums = [100,4,200,1,3,2]
        Output: 4
        Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
        Example 2:

        Input: nums = [0,3,7,2,5,8,4,6,0,1]
        Output: 9
        Example 3:

        Input: nums = [1,0,1,2]
        Output: 3


#### Unordered set stores elements in any order and insertion, deletion, and access operations are O(1) time due to the use of hashing.

#### Set stores elements in a sorted order and operations such as insertions, deletions, and accessing operations are takes logarithmic O(log n) in time complexity.