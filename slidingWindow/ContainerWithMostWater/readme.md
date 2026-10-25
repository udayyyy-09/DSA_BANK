📦 [Container With Most Water](https://leetcode.com/problems/container-with-most-water/description/)

🧾 Problem Statement
You are given an integer array height of length n. There are n vertical lines such that the two endpoints of the i-th line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Note: You may not slant the container.

![alt text](Container.jpg)

---------------------------------------------------------------------

🔍 Example
Input:

    height = [1,8,6,2,5,4,8,3,7]

Output:

    49

---------------------------------------------------------------------

Explanation:

Max area is between index 1 and 8: min(8, 7) * (8 - 1) = 7 * 7 = 49

---------------------------------------------------------------------

✅ Approach: Two Pointers

1. Use two pointers, one at the start and one at the end of the array.

2. Calculate the area between them.

3. Move the pointer with the smaller height inward.

4. Update the maximum area each time.

5. Continue until the two pointers meet.

---------------------------------------------------------------------

🧠 Time and Space Complexity

Time Complexity: O(n)

Space Complexity: O(1)

---------------------------------------------------------------------

My Solution: https://leetcode.com/problems/container-with-most-water/solutions/6204239/single-one-loop-approach-by-udayyyy09-jq2d


