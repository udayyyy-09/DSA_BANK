/*


class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size(), count = 0, sum = 0;

        unordered_map<int,int>mp;
        mp[0] = 1;

        for(int i =0;i<n;i++){
            sum += nums[i];
            int rem = ((sum%k) + k)%k;  
            if(mp.find(rem) != mp.end()){
                count += mp[rem];
            }
            
            mp[rem]++;
        }
        
        return count;
    }
};


*/