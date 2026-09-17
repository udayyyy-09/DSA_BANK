/*

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size(), pair = n/2, count = 0;
        // if(n == 1 && nums[0] == nums[1])
        sort(nums.begin(), nums.end());

        for(int i = 0;i<n-1;i++){
            if(count == pair) return true;
            if(nums[i] == nums[i+1]){
                count++;
            }
            i++;
        }

        return (count == pair) ? true:false;

    }
};

*/