## 🚀 Problem Statement
Given an m x n grid filled with non-negative integers, find a path from top-left to bottom-right which minimizes the sum of all numbers along its path. You may only move right or down at any point in time.

----------------------------------------------

## 🧠 Approach

This solution uses Dynamic Programming with a 2D dp table to record the minimum path sum at each cell:

    - Base Case: dp[0][0] = grid[0][0]
    - First Row: Only reachable from the left
    - First Column: Only reachable from above
    - Rest of Grid: Use the minimum of top and left neighbor


