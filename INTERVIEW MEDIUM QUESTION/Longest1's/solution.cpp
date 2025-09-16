/*

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size(), len = INT_MIN, zero = 0, st = 0;
        if(n == 1) return 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0) zero++;
            while(zero > 1 && st < n){
                if(nums[st] == 0) zero--;
                st++; 
            }

            len = max(len, i-st);

        }
        return (len == INT_MIN) ? 0: len;
    } 
};

*/