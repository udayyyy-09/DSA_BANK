/*       Leetcode -> 1550        ( https://leetcode.com/problems/three-consecutive-odds/description/ )
        Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
 
        Example 1:
            Input: arr = [2,6,4,1]
            Output: false
        Explanation: There are no three consecutive odds.
        Example 2:
            Input: arr = [1,2,34,3,4,5,7,23,12]
            Output: true
            Explanation: [5,7,23] are three consecutive odds.

        Constraints:
            1 <= arr.length <= 1000
            1 <= arr[i] <= 1000
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ans = 0;
        for(int i : arr) {
            if(i % 2 != 0 && ans <= 3) {
                ans++;
                if(ans == 3) break;
            } else {
                if(ans == 3) return true;
                ans = 0;
            }
        }
        if(ans == 3){
            return true;
        }
        return false;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    if(sol.threeConsecutiveOdds(arr)) {
        cout << "Yes, the array contains 3 consecutive odd numbers." << endl;
    } else {
        cout << "No, the array does not contain 3 consecutive odd numbers." << endl;
    }

    return 0;
}
