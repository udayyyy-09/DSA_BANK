📚 Container With Most Water    https://leetcode.com/problems/container-with-most-water/?envType=study-plan-v2&envId=top-interview-150

✅ Problem Statement
Given an array height[] of non-negative integers representing the height of lines drawn on the x-axis, you need to find two lines that together with the x-axis form a container with the maximum area.

💡 The area of the container is determined by:

The distance between the two lines.

The height of the shorter line (since the container is limited by the smaller line).

            Input: height = [1,8,6,2,5,4,8,3,7]
            Output: 49
            <!-- Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49. -->
        
![alt text](<Screenshot 2025-03-24 221948.png>)

🔥 Constraints
n == height.length
2 <= n <= 10⁵
0 <= height[i] <= 10⁴

-----------------------------------------------------------------------------------------------------------

The formula for the area between two lines at indices st and end:
Area=min(height[st], height[end])×(end−st)

-----------------------------------------------------------------------------------------------------------

⚙️ Approach: Two-Pointer Technique

1. Initialize Two Pointers:

st = 0    leftmost pointer.

end = height.size() - 1   rightmost pointer.

2. Calculate the area: area=min(height[st], height[end])×(end−st)

3. Update the Maximum Area:
Keep track of the maximum area encountered using a maxi variable.
Move the Pointers:

4. If height[st] < height[end]:

➝ Move the left pointer right (st++).

Else:

➝ Move the right pointer left (end--).

This ensures we explore all possible container combinations efficiently.

-----------------------------------------------------------------------------------------------------------

⏱️ Complexity Analysis
Time Complexity: O(N)
Each pointer moves at most N steps.
Space Complexity: O(1)
No extra space is required.

