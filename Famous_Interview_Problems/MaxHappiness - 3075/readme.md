# 3075. Maximize Happiness of Selected Children

You are given an array happiness of length n, and a positive integer k.

There are n children standing in a queue, where the ith child has happiness value happiness[i]. You want to select k children from these n children in k turns.

In each turn, when you select a child, the happiness value of all the children that have not been selected till now decreases by 1. Note that the happiness value cannot become negative and gets decremented only if it is positive.

Return the maximum sum of the happiness values of the selected children you can achieve by selecting k children.

### Example

            Input: happiness = [1,2,3], k = 2
            Output: 4
            Explanation: We can pick 2 children in the following way:
            - Pick the child with the happiness value == 3. The happiness value of the remaining children becomes [0,1].
            - Pick the child with the happiness value == 1. The happiness value of the remaining child becomes [0]. Note that the happiness value cannot become less than 0.
            The sum of the happiness values of the selected children is 3 + 1 = 4.

### Approach

- first we need max happniess so we will sort the array and start iterating from last value.
- if (k == 1 || n == 1) we will return element.
- we first add the sum of last digit directly in ans then think and see that from i = n-2 happiness start to decreasing by 1 and in each iteration it's decreaded by +1 means +1, +2, +3 etc
- if (val < 0) we just left there