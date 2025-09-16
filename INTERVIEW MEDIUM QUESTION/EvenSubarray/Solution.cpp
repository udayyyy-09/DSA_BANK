#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int EvenKSubarray(vector<int>nums, int k){
    int n = nums.size(),ans = INT_MAX;
    unordered_map<int,int>mp;
    mp[0] = -1;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += nums[i];
        int rem = (sum&1);

        if(mp.find(rem)!=mp.end()){
            int len = i - mp[rem];
            if(len >= k){
                ans = min(ans,len);
            }
        }else{
            mp[rem] = i;
        }
    }
    return (ans == INT_MAX) ? -1 : ans;

}
int main(){
    vector<int>v = {2,1,4,5};
    cout<<EvenKSubarray(v,2);
 
}