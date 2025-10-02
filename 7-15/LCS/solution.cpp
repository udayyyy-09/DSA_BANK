/*

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return 1;

        //O(NlogN) approach (sort + count)

        // sort(nums.begin(), nums.end());
        // int count = 1, maxi = INT_MIN;
        // for(int i=1;i<nums.size();i++){
        //     int diff = nums[i] - nums[i-1];
        //     if(diff == 1){
        //         count++;
        //         maxi = max(maxi, count);
        //     }else if(diff !=1 && nums[i] != nums[i-1]){
        //         count = 1;
        //     }
        // }
        // return (maxi == INT_MIN)? 1: maxi;

        //O(N) approach (unordered_set + count)
        unordered_set<int>st(nums.begin(), nums.end());
        int maxi = 0;
        for(int elem: nums){
            int count = 1;
            if(st.find(elem-1) == st.end()){
                int num = elem+1;
                while(st.find(num) != st.end()){
                    count++;
                    num++;
                }
                maxi = max(count, maxi);
            }
            
        }
        return maxi;

    }
};

*/