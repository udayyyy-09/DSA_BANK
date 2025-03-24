/*LEETCODE QUESTION NO. -> 1
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order. 

we are going to See two approach of this problem one is using HashMap(Optimal Approach) and other is using Two Nested Loop(Brute).

Brute Force Approach🔥
Use two nested loops:
The outer loop selects one element (nums[i]).
The inner loop checks every other element (nums[j]) to see if their sum equals target.
If a valid pair is found, return their indices.

Optimal Approach🔥
Use a hash map (unordered_map) to store each number's index as we iterate through the array.
For each number nums[i], check if target - nums[i] exists in the map.
If it exists, return the stored index and the current index.

*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<int> TwoSum(vector<int>& nums,int target){
    //BRUTE FORCE
        int n = nums.size();
        for(int i = 0; i < n; i++) { 
            for(int j = i + 1; j < n; j++) { 
                if(nums[i] + nums[j] == target) { 
                    return {i, j};      // return their indices 
                }
            }
        }
        return {};  // In case no solution exists
    
    //OPTIMAL APPROACH
    // unordered_map<int,int>mp;
    //     for(int i=0;i<nums.size();i++){
    //         int comp = target-nums[i];
    //         if(mp.find(comp)!=mp.end()){
    //             return {mp[comp],i};
    //         }
    //         mp[nums[i]] = i;
    //     }
    // return {};

}
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>nums(size);
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter Target: ";
    cin>>target;
    vector<int>ans = TwoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}

