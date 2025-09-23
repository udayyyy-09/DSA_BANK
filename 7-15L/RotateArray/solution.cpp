/*


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int st = 0;
        int n = nums.size();
        //approach 1
        k = k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};


*/