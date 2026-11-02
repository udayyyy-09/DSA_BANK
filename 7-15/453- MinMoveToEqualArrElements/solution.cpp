/*\




class Solution {
public:
    // int helper(vector<int>&nums){
        
    // }
    int minMoves(vector<int>& nums) {
        // return -11;
        int n = nums.size();
        if(n == 1) return 0;
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        if(maxi == mini) return 0;
        
        int sum = 0;

        for(int val: nums){
            sum += val;
        }

        return sum - (n*mini);
    }
};




*/