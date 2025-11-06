/*
    class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int n = nums.size();

        int maxEle = *max_element(nums.begin(), nums.end());

        vector<int>freq(maxEle+1, 0);
        vector<int>prefix(maxEle+2,0);


        for(auto it: nums)freq[it]++;

        for(int i=1;i<maxEle+2;i++){
            prefix[i] = freq[i-1] + prefix[i-1];
        }

        int maxFreq = 1;

        for(int i=0;i<maxEle+1;i++){
            
            int lb = max(i-k, 0);
            int ub = min(i+k, maxEle);

            int numOfEle = prefix[ub+1] - prefix[lb];
            int numOfZero = freq[i]; //The ones who don't require operation

            int numOfValidOp = min(numOperations, numOfEle - numOfZero);

            maxFreq = max(maxFreq, numOfValidOp + numOfZero);
        }

        return maxFreq;
    }
};

*/