#include<bits/stdc++.h>
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {
    if(nums.size()==1){
        double res = nums[0];
        return res;
    }
    double sum = 0;
    for(int i=0;i<k;i++){
        sum += nums[i];
    }
    double maxisum = sum;
    int st = 0;
    for(int i = k;i<nums.size();i++){
        sum = sum - nums[st] + nums[i];
        maxisum = max(sum,maxisum);
        st++;
    }
    return maxisum/k;

}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cout<<"Enter k: ";
    cin>>k;
    cout<<endl<<findMaxAverage(nums,k);
}