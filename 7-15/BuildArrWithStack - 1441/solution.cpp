/*

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        int idx = 0;
        for(int i = 1;i<=n;i++){
            res.push_back("Push");
            if(idx < target.size() && i == target[idx]){
                idx++;
            }else{
                res.push_back("Pop");
            }
            if(idx == target.size()) return res;
        }
        return res;
    }
};

*/