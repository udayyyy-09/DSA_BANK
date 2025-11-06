#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxLen01(vector<int> nums){
    int n = nums.size(), maxi = 0, sum = 0;
    for(int i=0;i<n;i++){
        if(nums[i] == 0) nums[i] = -1;
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        sum += nums[i];
        if(sum == 0){
            maxi = i+1;
        }
        if(mp.find(sum) == mp.end()) mp[sum] = i;
        if(mp.find(sum) != mp.end()){
            maxi = max(maxi , i - mp[sum]);
        }
        
    }
    return maxi;
}

int main()
{
    vector<int>nums = {1,0,1,0,1,0,1};
    cout<<maxLen01(nums);
}