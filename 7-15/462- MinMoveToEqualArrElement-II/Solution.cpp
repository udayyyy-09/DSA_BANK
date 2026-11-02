/*


class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        // if(n == )
        // int maxi = *max_element(nums.begin(), nums.end());
        // int mini = *min_element(nums.begin(), nums.end());

        // if(maxi == mini) return 0;

        sort(nums.begin(), nums.end());

        int med = nums[n/2];

        int sum = 0;
        for(int val: nums){
            int diff = abs(val - med);
            sum += diff;
        }
        return sum;

    }
};


*/