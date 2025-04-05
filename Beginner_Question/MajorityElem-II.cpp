/*      Leetcode -> 229              ( https://leetcode.com/problems/majority-element-ii/ )

        Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
        Example 1:
            Input: nums = [3,2,3]
            Output: [3]
          
Approach 
    Brute Force Approach (Using Hash Map)
    Steps:
    1. Create a hash map to count frequency of each element.
    2. Traverse the map and collect elements whose frequency is greater than n / 3.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        unordered_map<int,int>mp;

        for(int i : nums) {
            mp[i]++;
        }

        for(auto &j : mp) {
            if(j.second > n / 3) {
                v.emplace_back(j.first);
            }
        }

        return v;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = sol.majorityElement(nums);

    cout << "Majority elements (appearing more than n/3 times): ";
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

