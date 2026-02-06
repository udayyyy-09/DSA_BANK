/*

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        //I can easily do this approach with sorting i.e O(NlogN) TC but what will be the optimized solution of it?
        int n = nums.size(), left = -1, right = -1, maxi = INT_MIN, mini = INT_MAX;
        for(int i = 0;i<n;i++){
            //in left to right check for miniVal which disturbing the order
            if(nums[i] < maxi){
                right = i;
            }else{
                maxi = max(maxi, nums[i]);
            }
        }
        if(right == -1) return 0;
        for(int i = n-1;i>=0;i--){
            //in right to left check for maxival which disturbing the order
            if(nums[i] > mini){
                left = i;
            }else{
                mini = min(mini, nums[i]);
            }
        }
        return right - left + 1;

    }
};

*/