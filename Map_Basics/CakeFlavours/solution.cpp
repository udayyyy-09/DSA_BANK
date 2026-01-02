#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<climits>
using namespace std;

int LongSegment(vector<int>nums, int k){
    int n = nums.size(), count = 1;
    int st = 0, end = 0, ans = INT_MIN;
    unordered_map<int,int>mp;
    while(end < n){
        mp[nums[end]]++;
        while(st < n && mp.size() >= k){
            mp[nums[st]]--;
            if(mp[nums[st]] == 0){
                mp.erase(nums[st]);
            }
            st++;
        }
        ans = max(ans, end - st +1);
        end++;
    }
    
    return ans;
}
int main(){
    vector<int> nums = {1,2,1,2,2,1};   // 1 1 1 2 2 1 
    cout<<LongSegment(nums, 2);
    
}