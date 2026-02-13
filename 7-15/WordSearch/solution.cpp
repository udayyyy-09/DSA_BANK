/*

class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int idx, int n, int m){
        //we check for valid ans then unvalid then processing
        if(idx == word.size()) return true;
        if(i < 0 || j<0 || i>=n || j>=m || board[i][j] != word[idx]) return false;
        //since it's dfs we going to do backtracking
        char temp = board[i][j];
        board[i][j] = '#';
        bool found = dfs(board, word, i+1, j, idx+1,n,m) || dfs(board, word, i-1, j, idx+1,n,m) || dfs(board, word, i, j+1, idx+1,n,m) || dfs(board, word, i, j-1, idx+1,n,m);

        board[i][j] = temp;

        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(dfs(board,word,i,j,0,n,m)){
                    return true;
                }
            }
            // if(mp.size() == 0 || mp.empty()) return true;
        }
        return false;

    }
};

*/