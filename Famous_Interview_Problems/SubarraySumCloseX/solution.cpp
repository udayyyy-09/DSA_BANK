/*Given an array of integers nums and an integer target X, find a contiguous subarray whose sum is closest to X (but not necessarily exceeding it).
Return the subarray as a vector of integers.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySumCloseX(vector<int> arr, int x){
    int n = arr.size();
    if(n == 1){
        return {arr[0]};
    }
    int closestSum = INT_MAX;
    vector<int> res;
    // brute forrce approach
    // for(int i=0;i<n;i++){
    //     int sum = 0;
    //     for(int j=i;j<n;j++){
    //         sum += arr[j];
    //         int diff = abs(sum - x);
    //         if(diff <= closestSum){
    //             closestSum = diff;
    //             int st =i;
    //             res.clear();
    //             while(st <= j){
    //                 res.push_back(arr[st]);
    //                 st++;
    //             }
    //             if(sum == x)return res;
    //         }
    //     }
    // }

    // Optimized approach using prefix sums
    int sum = 0,closestSum = INT_MAX;
    set<int>s;    // maps prefix sum to its index
    
    for(int i=0;i<n;i++){
        sum += arr[i];
        int diff = abs(sum - x);
        if(diff <= closestSum){
            closestSum = diff;
        }
    }

    return res;
}
int main(){
    vector<int> arr = {2, -1, 3, 5, 1};
    int x = 8;
    vector<int> result = subarraySumCloseX(arr, x);
    cout << "Subarray closest to " << x << ": ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}