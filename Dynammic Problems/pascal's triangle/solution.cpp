/*

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res; 
        if(numRows == 1) return {{1}};

        for(int i = 0;i<numRows;i++){
            vector<int>dp(i+1, 1);
            for(int j = 1; j < i;j++){
                dp[j] = res[i-1][j] + res[i-1][j-1];
            }
            res.push_back(dp);
        }
        return res;
    }
};

*/