/*LEETCODE-26                 ( https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/ )

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]  where 2 is total element in new modified array

*/
#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int idx = 0;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]!=nums[i+1]){
            nums[idx] = nums[i];
            idx++;
        }
    }
    nums[idx++] = nums[nums.size()-1];
    return idx;
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = removeDuplicates(nums);
    cout<<"Total elements after removing duplicates: "<<ans<<endl;
}