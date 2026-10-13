/*


class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        //first sort the array with absolute values(No neg integers)

        auto comp = [&](int a, int b){
            return abs(a) < abs(b);
        };
        sort(nums.begin(), nums.end(), comp);

        long long sum = 0;
        for(int i = 0;i<n;i++){
            long long res = 1ll*nums[i]*nums[i];

            if(i < n/2){
                sum -= res;
            }else{
                sum += res;
            }
        }
        return sum;
    }
};


*/