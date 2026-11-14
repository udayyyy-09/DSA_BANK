/*

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size(), mini = INT_MAX;

        int sum = 0, st = 0;
        for(int i = 0;i<n;i++){
            sum += nums[i];
            int len = i - st + 1;

            if(len >= l && len <= r){
                if(sum > 0){
                    mini = min(sum, mini);
                }else{
                    sum = 0;
                }
                
            }else if(len > r){
                st++;
            }
        }
        return (mini == INT_MAX) ? -1: mini;

    }
};

*/