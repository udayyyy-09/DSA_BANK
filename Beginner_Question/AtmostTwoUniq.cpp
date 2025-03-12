//LEETCODE-80                                 RETURN TOTAL NUMBER IN WHICH IT CONTAINS ATMOST 2 DUPLICATES
#include<iostream>
#include<vector>
using namespace std;
int atmostuniq(vector<int>& nums)   //1 1 1 2 2 3 
{
    int idx = 2;   //we will start from index 2 and 0,1 index are already fill with array 0,1 index elem
    for(int i=2;i<nums.size();i++){
        if(nums[i]!=nums[idx-2]){
            nums[idx] = nums[i];
            idx++;
        }
    }
    return idx;
}
int main()
{
    vector<int> nums= {1,1,1,2,2,2,5,5,5};
    int res = atmostuniq(nums);
    cout<<"Total elements with atmost 2 duplicates are "<<res<<endl;
}