/*

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(), maxi = INT_MIN, prod = 1;        
        for(int i:nums){
            prod *= i;
            maxi = max(maxi, prod);
            if(prod == 0) prod = 1;
        }
        prod = 1;
        for(int j=n-1;j>=0;j--){
            prod *= nums[j];
            maxi = max(maxi, prod);
            if(prod == 0) prod = 1;
        }
        return maxi;
    }

};

*/