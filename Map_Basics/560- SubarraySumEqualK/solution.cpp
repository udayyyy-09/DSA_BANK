/*



class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), count = 0;
        unordered_map<int,int>mp;
        int sum = 0;
        mp[0] = 1;
        for(int i = 0;i<n;i++){
            sum += nums[i];
            if(mp.find(sum -k)!= mp.end()){
                count += mp[sum - k];
            }
            mp[sum]++;
        }

        // if
        return count;
    }
};




*/