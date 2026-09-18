/*


class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size(), ans = INT_MAX, sum = 0, minilen = INT_MAX, count = 0;
        int idx = 0;
        vector<int>temp(n, INT_MAX);
        for(int i = 0;i<n;i++){
            sum += arr[i];
            while(idx < n && sum > target){
                sum = sum - arr[idx];
                idx++;
            }
            if(sum == target){
                // aftet getting sum == target check for last subarray if it's a overlapping or not
                int len = i - idx + 1;
                if(idx > 0 && temp[idx-1] != INT_MAX){
                    ans = min(ans, len + temp[idx-1]);
                }
                minilen = min(minilen, len);
            }
            
            temp[i] = minilen;

        }
        return (ans == INT_MAX) ? -1: ans;
        
    }
};



*/