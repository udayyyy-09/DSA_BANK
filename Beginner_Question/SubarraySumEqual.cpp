/*  Leetcode ->   2395         ( https://leetcode.com/problems/find-subarrays-with-equal-sum )
Given a 0-indexed integer array nums, determine whether there exist two subarrays of length 2 with equal sum. Note that the two subarrays must begin at different indices.
    Return true if these subarrays exist, and false otherwise.A subarray is a contiguous non-empty sequence of elements within an array.

    Ex:
        Input: nums = [4,2,4]
        Output: true
        Explanation: The subarrays with elements [4,2] and [2,4] have the same sum of 6.

*/

#include<bits/stdc++.h>
using namespace std;
bool findSubarrays(vector<int>& nums) {
    unordered_map<int, int> mp;  // Map to store the sum of adjacent pairs and their frequency

    for (int i = 0; i < nums.size() - 1; i++) {    // Loop through the array till the second last element
        int sum = 0;  
    
        sum = nums[i] + nums[i + 1];        // Calculate the sum of current and next element

        mp[sum]++;       // Store the sum in the map and increase its frequency
    }

    // Iterate over the map to check if any sum occurs at least twice
    for (auto &it : mp) {
        if (it.second >= 2) {  // If frequency of a sum is >= 2, return true
            return true;
        }
    }
}

int main() {
    vector<int> nums = {4, 2, 4, 5, 6};  // Example input
    bool result = findSubarrays(nums);
    cout<<boolalpha<<result;      //boolalpha is used to print true or false instead of 1 or 0
    return 0;
}