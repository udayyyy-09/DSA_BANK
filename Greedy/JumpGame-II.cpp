/*You are given a 0-indexed array of integers nums of length n. You are initially positioned at index 0.
Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at index i,
you can jump to any index (i + j) where: 0 <= j <= nums[i] and i + j < n
Return the minimum number of jumps to reach index n - 1. The test cases are generated such that you can reach index n - 1.
*/

/*
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size(),jump =0,maxjump = 0,endpt = 0;
        if(nums.size()==1) return 0;
        for(int i=0;i<n-1;i++){
            maxjump = max(maxjump,nums[i]+i);
            if(i == endpt){
                jump++;
                endpt  = maxjump;
            }
            // if(maxjump >=n-1) break;
            // }else if(maxjump>=n-1){
            //     break;
            // }
        }
        return jump;

    }
};

*/