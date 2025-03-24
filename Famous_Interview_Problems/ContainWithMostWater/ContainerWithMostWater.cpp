#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int maxi = 0;                    // Variable to store the maximum area
    int st = 0, end = height.size() - 1;  // Two pointers at the start and end of the array

    // Iterate until the two pointers meet
    while (st < end) {
        // Calculate the area with the current two lines
        int area = (min(height[st], height[end])) * (end - st);

        // Update the maximum area
        maxi = max(area, maxi);

        // Move the pointer with the smaller height
        if (height[st] < height[end]) {
            st++;    // Move left pointer
        } else {
            end--;   // Move right pointer
        }
    }

    return maxi;      // Return the maximum area found
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>nums(size);
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    cout<<"Maximum area: "<<maxArea(nums)<<endl;
}
    