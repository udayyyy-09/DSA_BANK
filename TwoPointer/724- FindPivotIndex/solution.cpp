/*



class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int val: nums){
            sum += val;
        }
        int end = n-1;
        int lsum = 0;
        for(int i = 0;i<n;i++){
            sum -= nums[i];
            if(sum == lsum) return i;
            lsum += nums[i];
        }
        return -1;
    }
};



*/