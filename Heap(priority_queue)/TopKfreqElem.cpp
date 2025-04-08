/*      LEETCODE ->     347           ( https://leetcode.com/problems/top-k-frequent-elements/description/?envType=problem-list-v2&envId=heap-priority-queue )

        Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
        Example 1:
            Input: nums = [1,1,1,2,2,3], k = 2
            Output: [1,2]

APPROACH
    1. Frequency Map:
        Use an unordered map to count the frequency of each element.

    2. Min Heap (Priority Queue):
        Use a min-heap (priority queue) of size k to keep track of the top k frequent elements.
            -> Push (frequency, element) pairs.
            -> If the heap size exceeds k, pop the element with the lowest frequency.
    3. Result:
        Extract the elements from the heap and return them.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int, int>> pq;
        unordered_map<int, int> mp;

        for (int i : nums) {
            mp[i]++;
        }

        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        while (k > 0) {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        return ans;
    }
};

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    Solution obj;
    vector<int> result = obj.topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements are:\n";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

