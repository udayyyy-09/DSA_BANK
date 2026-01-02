#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> Prices(vector<int>nums){
    int n = nums.size();
    //brute force approach
    // for(int i = 0;i<n;i++){
    //     int val = nums[i], j = i+1;
    //     while(j < n && val < nums[j]){
    //         j++;
    //     }
    //     if(j == n) continue;
    //     nums[i] = val - nums[j];
    // }
    
    //opimized approach
    stack<int>st;       //monotonic stack makes O(n) 
    
    //1st approach storing values from right - left
    // for(int i = n-1;i>=0;i--){
    //     while(!st.empty() && st.top() > nums[i]){
    //         st.pop();
    //     }
    //     int dis = st.empty() ? 0:st.top();
    //     st.push(nums[i]);
    //     nums[i] -= dis;
    // }
    
    //2nd approach storing indices from left - right
    for(int i = 0;i<n;i++){
        while(!st.empty() && nums[st.top()] > nums[i]){
            nums[st.top()] -= nums[i];
            st.pop();
        }
        st.push(i);
    }
    return nums;
}
int main(){
    vector<int> nums = {8,4,6,2,3};   
    vector<int> res = Prices(nums);
    for(int i: res){
        cout<<i<<" ";
    }
}