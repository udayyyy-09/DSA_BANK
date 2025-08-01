/*
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size(), sum =0, maxilen = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                nums[i] = -1;
            }
        }
        unordered_map<int,int>mp;
        mp[0] = -1;
        for(int i = 0;i<n;i++){
           sum += nums[i];
           if(sum == 0){
                maxilen = i-mp[sum];
           }
           if(mp.find(sum)!=mp.end()){
                maxilen = max(maxilen, i - mp[sum]);
           }else{
                mp[sum] = i;
           }
        }
        return maxilen;
        
    }
};

*/