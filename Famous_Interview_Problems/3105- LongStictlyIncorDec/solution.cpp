/*

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size(), len = 1;
        if(n == 1) return 1;

        // for(int i = 0;i<n;i++){
        //     int st = i, inc = 1;

        //     while(st + 1 < n && nums[st] < nums[st+1]){
        //         inc++;
        //         st++;
        //     }
        //     len = max(len, inc);

        //     st = i;
        //     int dec = 1;
        //     //from the same starting i position where we chck inc now we check for dec 
        //     while(st + 1 < n &&  nums[st] > nums[st+1]){
        //         dec++;
        //         st++;
        //     }
        //     len = max(len, dec);
        // }

        int inc = 1, dec = 1;
        int st = 0;
        int i = 0;
        while( i < n){
            // int st = i;

            if(i + 1 < n && nums[i] < nums[i+1]){
                inc++;
                dec= 1;
                i++;
            }else if(i + 1 < n && nums[i] > nums[i+1]){
                inc = 1;
                dec++;
                i++;
            }else{
                i++;
                inc = 1, dec = 1;
            }
            int val = max(inc,dec);
            len = max(len, val);
            // st = 1;
            
        }
        //for the last value
        // if(nums[n-1] > nums[n-2]){
        //     inc++;
        // }else{
        //     dec++;
        // }
        // int v = max(inc, dec);
        // len = max(len,v);

        return len;
    }
};


*/