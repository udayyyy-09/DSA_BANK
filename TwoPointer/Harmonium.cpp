/*      594. Longest Harmonious Subsequence             ( https://leetcode.com/problems/longest-harmonious-subsequence/description/ )

We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.

Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.
*/

#include<bits/stdc++.h>
using namespace std;
int findLHS(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        sort(nums.begin(),nums.end());
        int st = 0, end = 1, len = 0;
        while(end < nums.size() && st<= end){
            int diff = nums[end] - nums[st];
            if(diff > 1){
                // end++;
                st++;
            }
            if(diff ==1){
                len = max(len,end-st+1);
                end++; 
            }
            if(diff <1){
                end++;
            }
            
        }
        if(len == 0) return 0;
        return len;
}

int main(){
    
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Longest harmoninum subsquence: "<<findLHS(nums);
}