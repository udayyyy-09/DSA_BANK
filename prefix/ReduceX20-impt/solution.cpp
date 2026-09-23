/*


class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size(), total = 0;
        for(int v:nums){
            total += v;
        }
        int diff = total - x;
        if(diff == 0) return n;
        if(diff > total){
            return -1;
        }
        int idx = 0, sum = 0, maxiLen = -1;
        for(int i = 0;i<n;i++){
            sum += nums[i];
            while(idx<=i && sum > diff){
                //this loop is used when sum > x
                sum -= nums[idx];
                idx++;
            }
            if(sum == diff){
                maxiLen = max(maxiLen, i - idx +1);
            }
        }
        if(maxiLen == -1) return -1;
        return n - maxiLen;
    }
};

*/