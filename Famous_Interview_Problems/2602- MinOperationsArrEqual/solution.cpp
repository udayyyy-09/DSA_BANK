/*


class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        vector<long long>res;
        int n = nums.size(), m = queries.size();
        sort(nums.begin(), nums.end());
        vector<long long>prefix(n+1,0);
        int idx = 0;
        long long sum = 0;
        for(int val: nums){
            sum += val;
            prefix[idx + 1] = sum;
            idx++;
        }

        for(int val: queries){
            long long k = upper_bound(nums.begin(), nums.end(), val) - nums.begin();

            long long left = k*val - prefix[k];

            long long right = prefix[n] - prefix[k] - val*(n-k);

            res.push_back(left + right);
        }

        return res;

    }
};


*/