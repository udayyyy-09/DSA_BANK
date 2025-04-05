/*  Leetcode -> 169           ( https://leetcode.com/problems/majority-element/description/ )
    Given an array nums of size n, return the majority element.
    The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array
    Ex:
    Input: nums = [3,2,3]
    Output: 3
*/
 
#include<bits/stdc++.h>        //Include all the standard libraries 
using namespace std;
int majorityElement(vector<int>& nums){
    unordered_map<int,int>mp;
    for(int i:nums){
        mp[i]++;
    }
    for(auto &j:mp){
        if(j.second > nums.size()/2){
            return j.first;
        }
    }
    return -1;
}

int main(){
    vector<int>nums = {2,2,1,1,1,2,2};
    int res = majorityElement(nums);
    cout<<"Majority Element: "<<res;

}