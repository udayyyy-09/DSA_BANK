/*      Leetcode -> 283   Move Zeros ( https://leetcode.com/problems/move-zeroes/description/ )

        My Solution:    ( https://leetcode.com/problems/move-zeroes/solutions/6695737/two-pointer-approach-beats-100-by-udayyy-vu3y )
        
*/

#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    if(nums.size()==1 ) return;
    int st = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){
            swap(nums[st], nums[i]);
            st++;
        }
    }
    
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"After moving 0's to right side "<<endl;
    moveZeroes(nums);
}