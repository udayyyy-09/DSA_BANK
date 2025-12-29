/*

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        //below approach is taking extra space
        // vector<int>temp(n+1, 0);
        // for(int i :nums){
        //     temp[i]++;
        // }
        // for(int i = 1;i<=n;i++){
        //     if(temp[i] == 0){
        //         res.push_back(i);
        //     }
        // }

        //thinking of O(1) extra space means in-place adjustmenet
        //approach is like wtf yad rakhni hai ok
        for(int i = 0;i<n;i++){
            int idx = abs(nums[i]) - 1;
            if(nums[idx] > 0) nums[idx] = -nums[idx];
        }
        for(int i = 0;i<n;i++){
            if(nums[i] > 0) res.push_back(i+1);
        }
        return res;
    
    }
};

*/