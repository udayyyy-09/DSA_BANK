/*   215.           Kth Largest Element in an Array       ( https://leetcode.com/problems/kth-largest-element-in-an-array/description/ )
Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.
Can you solve it without sorting?

Example 1:
Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
*/

#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i:nums){
            pq.push(i);
        }
        while(k-1 >0 && !pq.empty()){
            pq.pop();
            k--;
        }
        return pq.top();

}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n ;i++){
        cin>>nums[i];
    }
    int k;
    cin>> k;
    cout<< findKthLargest(nums,k)<<endl;
}