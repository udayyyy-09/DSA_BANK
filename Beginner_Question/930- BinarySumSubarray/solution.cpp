/*


class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size(), sum = 0, count = 0;
        int st = 0;
        unordered_map<int,int>mp;
        mp[0] = 1;
        for(int i = 0;i<n;i++){
            sum += nums[i];

            if(mp.find(sum - goal) != mp.end()){
                count += mp[sum - goal];
            }

            mp[sum]++;
        }
        return count;


        //In this type of question like finding a subarray with sum goal alwasys use hash + prefix approach 
    }
};


*/