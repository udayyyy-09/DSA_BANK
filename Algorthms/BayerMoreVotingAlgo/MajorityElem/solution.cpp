/*

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = nums[0], count = 0;
        for(int val:nums){
            if(candidate == val){
                count++;
            }else if(count > 0){
                count--;
            }else{
                candidate = val;
                count = 1;
            }
        }
        count = 0;
        for(int i:nums){
            if(i == candidate) count++;
        }
        return candidate;
    }
};

*/