/*

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size(), sum  = nums[0];
        if(n == 3) return nums[0] + nums[1] + nums[2];
        int one = INT_MAX, sec = INT_MAX;
        for(int i = 1;i<n;i++){
            if(nums[i] < one && one > sec){
                one = min(one,nums[i]);
            }else{
                sec = min(sec,nums[i]);
            }
        }
        return sum + one + sec;

    }
};

*/