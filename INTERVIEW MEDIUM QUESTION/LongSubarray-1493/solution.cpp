/*
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int len = 0, n = nums.size(), zero = 0, st = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0) zero++;
            while(zero > 1 && st<n){
                if(nums[st] == 0){
                    zero--;
                }
                st++;
            }
            len = max(len, i-st);
        }
        return len;
    } 
};

*/