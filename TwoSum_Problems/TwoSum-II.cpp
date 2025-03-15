/*  Leetcode -> 167
    Given a 1-indexed array of integers numbers that is sorted in non-decreasing order, find two numbers such that they add up to a specific target.
Return the indices (1-based) of the two numbers as an array [index1, index2].
You must use only constant extra space (O(1) space complexity) and solve the problem in O(N) time complexity.
Example 1:
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]   // as indexed don't start from 0

💡This problem follows the two-pointer technique because the array is sorted.
Instead of using a hash map (like in the original Two Sum problem), we can use two pointers to efficiently find the solution in O(N) time.

✅ Approach - Two Pointers (O(N))
Idea:
🔘Place two pointers:
left = 0 (first element)
right = n - 1 (last element)
🔘Compute sum = numbers[left] + numbers[right].
🔘If sum == target, return [left+1, right+1].
🔘If sum < target, move left forward.
🔘If sum > target, move right backward.
🔘Repeat until a solution is found.

🔘Time Complexity: O(N)
🔘Space Complexity: O(1) (no extra space used)
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
    //1st approach
    // unordered_map<int,int>mp;
    // int idx = 1;
    // for(int i=0; i<numbers.size();i++){
    //     int sum = target-numbers[i];
    //     if(mp.find(sum)!=mp.end()){
    //         int ans = i+1;
    //         return {mp[sum],ans};
    //     }
    //     mp[numbers[i]] = idx;
    //     idx++;
    // }
    // return {};

    //2nd approach
    int st = 0,end = numbers.size()-1;
    while(st<end){
        int sum = numbers[st]+numbers[end];
        if(sum == target){
            return {st+1,end+1};       //return their indices
        }else if(sum > target) {
            end--;
        }else{
            st++;
        }
    }
    return {};
}

int main(){
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(numbers, target);
    cout <<"Index Number: " <<ans[0] << ", "<< ans[1]; 
}