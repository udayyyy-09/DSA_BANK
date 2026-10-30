/*


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size(); 
        int peak = INT_MIN;
        int st = 0, end = n-1, res;
        // return -11;

        // while(st <= m){
        //     if(nums[st] > peak){
        //         peak = nums[st];
        //         res = st;
        //     }
        //     st++;
        // }

        // while(end < n){
        //     if(nums[end] > peak){
        //         peak = nums[end];
        //         res = end;
        //     }
        //     end++;
        // }

        // if(peak == INT_MIN) return 0;


        // return res;


        //Above approach is O(N) but trying the O(LogN)

        while(st < end){
            int m = st + (end - st)/2;
            
            if(nums[m] < nums[m+1]){
                st = m+1;
            }else{
                end = m;
            }
        }
        return st;
        
    }
};


*/