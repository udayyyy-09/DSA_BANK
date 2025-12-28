/*

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // vector<int>temp;
        int n = nums.size();
        int idx = 0;
        //this is O(n^2) approach think of optimized approach?
        // while(idx < n){
        //     int st = 0, end = n-1, val = nums[idx];
        //     int count = 0;
        //     while(st < idx){
        //         if(nums[st] < val){
        //             count++;
        //         }
        //         st++;
        //     }
        //     while(end > idx){
        //         if(nums[end] < val){
        //             count++;
        //         }
        //         end--;
        //     }
        //     temp.push_back(count);
        //     idx++;`
        // }

        //Idea is freq + prefix 
        vector<int>temp(101,0);
        for(int i:nums){
            temp[i]++;
        }
        vector<int>res;
        vector<int>prefix(101,0);
        int sum = 0;
        for(int i = 1;i<=100;i++){
            // sum += temp[i];
            prefix[i] = prefix[i-1] +  temp[i-1];
        }
        for(int i:nums){
            res.push_back(prefix[i]);
        }
        return res;

    }
};


*/