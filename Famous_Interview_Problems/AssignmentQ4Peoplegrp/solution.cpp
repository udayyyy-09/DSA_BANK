#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<vector<int>> helper(vector<int> nums){
    int n = nums.size();
    unordered_map<int,vector<int>>mp;
    vector<vector<int>>res;
    for(int i=0;i<n;i++){
        mp[nums[i]].push_back(i);
        if(mp[nums[i]].size() == nums[i]){
            res.push_back(mp[nums[i]]);
            mp.erase(nums[i]);
        }
    }
    return res;
    
}

int main(){
    vector<int>nums = {2,1,3,3,3,2};
    vector<vector<int>> ans = helper(nums);
    for(auto &it:ans){
        cout<<"[";
        for(auto &j: it){
            cout<<j<<",";
        }
        cout<<"]";
    }

}