/*

    class Solution {
public:
    bool simulate(vector<int>nums, int curr,int dir ){
        //do think for two direction left and right
        // int left = 0, right = 0;
        int pos = curr;
        while(curr >=0 && curr < nums.size()){
            if(nums[curr] == 0){
                if(dir == 1){
                    curr--;
                }else{
                    curr++;
                }
            }else if(nums[curr] > 0){
                dir *= -1;       //flip direction
                nums[curr]--;
                if(dir == 1){
                    curr--;
                }else{
                    curr++;
                }
            }         
        }
        // if(curr <0 || curr >= nums.size()) return false;
        for(int i:nums){
            if(i!=0) return false;
        }
        return true;
    }

    int countValidSelections(vector<int>& nums) {
        int n = nums.size(),res = 0;
        for(int curr = 0;curr<n;curr++){
            if(nums[curr] == 0){
                if(simulate(nums, curr, 1)) res++;
                if(simulate(nums,curr,-1)) res++;
            }
        }
        return res;
    }
};

*/