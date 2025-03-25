#include <iostream>
#include <vector>
#include <algorithm>   // For sort function
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;           // Store the triplets
        sort(nums.begin(), nums.end());    // Sort the array for easier traversal

        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int st = i + 1, end = nums.size() - 1;   // Two pointers: `st` and `end`
            
            while (st < end) {
                int sum = nums[i] + nums[st] + nums[end];   // Calculate current sum

                if (sum == 0) {                 // If the sum equals zero
                    ans.push_back({nums[i], nums[st], nums[end]});
                    st++;
                    end--;

                    // Skip duplicates for the second and third elements
                    while (st < end && nums[st] == nums[st - 1]) st++;
                    while (st < end && nums[end] == nums[end + 1]) end--;

                } else if (sum < 0) {          // If sum is less, move the left pointer
                    st++;
                } else {                       // If sum is greater, move the right pointer
                    end--;
                }
            }
        }
        return ans;    // Return the list of unique triplets
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = solution.threeSum(nums);

    cout << "Unique triplets with sum 0:\n";
    for (const auto& triplet : result) {
        cout << "[";
        for (int val : triplet) {
            cout << val << " ";
        }
        cout << "]\n";
    }

    return 0;
}
