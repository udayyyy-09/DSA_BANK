/*


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return 1;
        // return -1;

        unordered_map<int,int>mp;

        for(int val:nums){
            mp[val]++;
        }

        int count = 0;
        for(auto &it: mp){
            int val = it.first, sum = 0;
            if(mp.find(val - 1) == mp.end()){
                while(mp.find(val) != mp.end() ){
                    val++;
                    sum++;
                }
            }
            count = max(count,sum);
        }

        return count; 

    }
};


*/