/*

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();

        int i =0;
        while(i < n-1 && nums[i] < nums[i+1]){
            i++;
        }
        if(i >= n-2 || i == 0) return false;
        int j = i;

        while(j < n-1 && nums[j] > nums[j+1]){
            j++;
        }
        if(j >=n-1 || j == i) return false;
        int k = j;
        while(k < n-1 && nums[k] < nums[k+1]){
            k++;
        }
        if(k == j || k != n-1 ) return false;
        return true;
    }
};

*/