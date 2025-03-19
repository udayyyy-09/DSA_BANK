/*  Leetcode -> 27      ( https://leetcode.com/problems/remove-element )
    Problem: Remove all occurrences of a given value from an array in-place and return the new length.
    - The order of elements may change.
    - Do not use extra space.

Note: in-place algorithm allows the user to modify the content in original array only and does not allow to use extra space to store content of input array.
*/

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int idx = 0;  // Index to place non-val elements
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {  // If the current element is not val, keep it
            nums[idx] = nums[i];
            idx++;
        }
    }
    return idx;  // Return new array size
}

int main() {
    vector<int> nums = {3, 2, 2, 3, 4, 2, 3};           //Example input array
    int val = 3;  // Element to remove
    
    int ans = removeElement(nums, val);         // Call function
    
    cout << "Total elements after removing occurences: " << ans << endl;

    return 0;
}