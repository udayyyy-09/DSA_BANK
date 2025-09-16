/*


class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(), st = 0, sum = 0;
        unordered_map<int,int>mp;
        mp[0] = -1;
        int prefixSum = 0;
        for(int i=0;i<n;i++){   
            prefixSum += nums[i];
            
            int rem = prefixSum % k;
            if(mp.find(rem)!=mp.end()){
                //check the length of array
                if(i - mp[rem] >=2) return true;
            }else{
                mp[rem] = i;
            }
        }
        return false;
    }
};



*/