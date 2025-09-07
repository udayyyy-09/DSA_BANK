/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
Return the sum of the three integers.
You may assume that each input would have exactly one solution.

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 3) return nums[0] + nums[1] + nums[2];
        int ans = INT_MAX, Sum;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2;i++){
            int st = i+1, end = n-1;
            while(st < end){
                int sum = nums[i] + nums[st] + nums[end];
                int diff = abs(sum - target);
                ans = min(ans, diff);
                if(ans == diff) Sum = sum;
                if(sum == target){
                    return sum;
                }else if(sum < target){
                    st++;
                }else{
                    end--;
                }
            }
        }
        return Sum;
    }
};
*/