/*


class Solution {
public:
    void dfs(int i, int j, int n, int m, vector<vector<int>>&grid, long long &sum){
        if(i<0 || j < 0 || i>= n || j >=m || grid[i][j] == 0) return;
        sum += grid[i][j];
        grid[i][j] = 0;
        dfs(i+1, j,n,m,grid,sum);
        dfs(i-1, j,n,m,grid,sum);
        dfs(i, j+1,n,m,grid,sum);
        dfs(i, j-1,n,m,grid,sum);
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                long long sum = 0;
                if(grid[i][j] > 0){
                    dfs(i,j,n,m,grid,sum);
                    if(sum%k == 0) count++;
                }
            }
        }
        return count;

    }
};


*/