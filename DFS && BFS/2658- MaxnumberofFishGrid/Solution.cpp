/*


class Solution {
public:
    void dfs(int i, int j, int n, int m, vector<vector<int>>& grid, int &res){
        if(i < 0 || i>=n || j >=m || j< 0 || grid[i][j] == 0){
            return;
        }
        res += grid[i][j];
        grid[i][j] = 0;
        dfs(i+1, j,n,m,grid, res); //handle upper row
        dfs(i-1, j,n,m,grid, res);
        dfs(i,j+1,n,m,grid, res);
        dfs(i,j-1,n,m,grid, res);
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int  n = grid.size(), m = grid[0].size();

        int maxi = INT_MIN, res = 0;
    
        for(int i =0;i<n;i++){
            // res = 0;
            for(int j = 0;j<m;j++){
                if(grid[i][j]  > 0){
                    res = 0;
                    dfs(i,j,n,m,grid,res);
                    maxi = max(res, maxi);
                }
            } 
        }
        return (maxi == INT_MIN) ? 0: maxi;

        
    }
};


*/