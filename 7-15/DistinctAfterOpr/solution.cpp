/*

class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0;
        //there are two approaches (set+while gives TLE at 614/633) and (greedy single loop gives O(N))
        //Greedy Approach
        sort(nums.begin(), nums.end());
        int curr = INT_MIN;
        for(int i=0;i<n;i++){
            int diff = nums[i] - k, sum = nums[i] + k;
            int pick  = max(curr+1, diff);
            if(pick <= sum){
                ans++;
                curr = pick;
            }
        }
        return ans;
    }
};

*/