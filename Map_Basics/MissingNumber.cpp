/*  Leetcode -> 268               ( https://leetcode.com/problems/missing-number/description/ )
    Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
    Ex: 
    Input: nums = [3,0,1]
    Output: 2
*/
//                              1ST APPROACH (USING MAP)
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int missingNumber(vector<int>& nums) {
    unordered_map<int, bool> mp;

    // Store all numbers in the hash map
    for (int num : nums) {
        mp[num] = true;
    }

    // Check for the missing number in range [0, n]
    for (int i = 0; i <= nums.size(); i++) {
        if (mp.find(i) == mp.end()) { // If not found in map, return missing number
            return i;
        }
    }

    return -1; // This should never be reached
}

int main() {
    vector<int> nums = {3, 0, 1};  // Missing number should be 2
    cout << "Missing Number: " << missingNumber(nums) << endl;
    return 0;
}
//----------------------------------------------------------------------------------------------------------------------

//                                2ND APPROACH   (Using constant space (vector))
#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<int> present(n + 1, 0);  // Create a vector of size n+1 initialized with 0

    // Mark numbers present in the array
    for (int i=0;i<n;i++) {
        present[present[i]] = 1;
    }

    // Find the missing number
    for (int i = 0; i <= n; i++) {
        if (present[i] == 0) return i;
    }

    return -1;  // Should never be reached
}

int main() {
    vector<int> nums = {3, 0, 1};  // Missing number should be 2
    cout << "Missing Number: " << missingNumber(nums) << endl;
    return 0;
}

