/*          64. Minimum Path Sum        (  https://leetcode.com/problems/minimum-path-sum/ )

Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.
Note: You can only move either down or right at any point in time.


*/

/*
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        // initiliasing 2D DP
        vector<vector<int>> dp(m,vector<int>(n)); // we can only go right or down
        dp[0][0] = grid[0][0];
        // filling 1st row
        for (int i = 1; i < n; i++) {
            dp[0][i]a = grid[0][i] + dp[0][i - 1];
        }
        // filling 1st column
        for (int i = 1; i < m; i++) {
            dp[i][0] = grid[i][0] + dp[i - 1][0];
        }

        // filling each cells
        for (int i = 1; i < m; i++) {
            for (int j = 1; j <n; j++) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
            }
        }
        return dp[m-1][n-1];
    }
};

*/