/*

    class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        int n = happiness.size();
        if( k== 1 || n == 1) return happiness[n-1];
        long long ans = happiness[n-1];
        k--;
        int idx = 1;
        for(int i = n-2;i>=0;i--){
            if(k == 0) break;
            int val = happiness[i] -idx;
            if(val > 0){
                ans += val;
            }
            k--;
            idx++;
        }
        return ans;
    }
};

*/