There are n people that are split into some unknown number of groups. Each

person is labeled with a unique ID from 0 to n - 1.

You are given an integer array groupSizes, where groupSizes[i] is the size of

the group that person i is in. For example, if groupSizes[1] = 3, then person 1

must be in a group of size 3.

Return a list of groups such that each person i is in a group of size

groupSizes[i].

Each person should appear in exactly one group, and every person must be in

a group. If there are multiple answers, return any of them. It is guaranteed that

there will be at least one valid solution for the given input.

The input (groupSizes) consists of a sequence of integers separated by spaces

in single line .

Constraint groupSizes.length == n
1 <= n <= 500

1 <= groupSizes[i] <= n

groupSizes = [3,3,3,3,3,1,3]

The output consists of a list of lists (or nested arrays).

Sample
Input 1
Sample
Output 1
Explanation [[5],[0,1,2],[3,4,6]]