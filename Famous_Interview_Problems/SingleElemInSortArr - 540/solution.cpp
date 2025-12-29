/*

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int val = 0;
        // O(n) approach beats 100% users
        // if(n == 1) return nums[0];
        // //checking for 2 condition 
        // if(nums[0] != nums[1]) return nums[0];
        // if(nums[n-1] != nums[n-2]) return nums[n-1];
        // for(int i = 0;i<n;i++){
        //     if(nums[i] != nums[i+1]){
        //         val++;
        //     }else{
        //         val = 0;
        //     }
        //     if(val == 2) return nums[i];
        // }

        //O(logn) Approach (Bc sb khud kara hu) but this is not interview friendly for that look below approach
        if(n == 1) return nums[0];
        int st = 0, end = n-1, ans = 0;
        // while(st < end){
        //     int m = st + (end -st)/2;
        //     if(nums[m] != nums[m-1] && nums[m] != nums[m+1]) return nums[m];
        //     if(m >0 && nums[m] == nums[m-1] && m%2 == 0){
        //         end = m-2;
        //     }else if(nums[m] == nums[m+1] && m%2 == 0){
        //         st = m+2;
        //     }else if(nums[m] == nums[m+1] && m%2 != 0){
        //         end = m-1;
        //     }else{
        //         st = m+1;
        //     }
        // }
        // ans = nums[st];
        // return ans;
        while(st < end){
            int m = st + (end - st)/2;
            if(m % 2 != 0) m--;
            if(m < n && nums[m] == nums[m+1]){
                st = m+2;
            }else{
                end = m;
            }
        }
        return nums[st];
    }
};

*/