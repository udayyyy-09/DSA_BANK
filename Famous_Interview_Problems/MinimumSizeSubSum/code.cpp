#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0, sum = 0;
        int minLen = INT_MAX;

        for (int end = 0; end < nums.size(); end++) {
            sum += nums[end];

            while (sum >= target) {
                minLen = min(minLen, end - start + 1);
                sum -= nums[start];
                start++;
            }
        }

        return (minLen == INT_MAX) ? 0 : minLen;
    }
};

int main() {
    Solution sol;
    int target;
    int n;

    cout << "Enter target: ";
    cin >> target;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = sol.minSubArrayLen(target, nums);
    cout << "Minimum length of subarray: " << result << endl;

    return 0;
}
