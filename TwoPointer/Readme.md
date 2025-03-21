📌 README: Two-Pointer Technique

✅ What is the Two-Pointer Technique?

The Two-Pointer Technique is an optimized algorithmic approach that uses two pointers to iterate over data structures (arrays, strings, or linked lists) to solve problems efficiently. Instead of using nested loops (O(N²) time complexity), this technique often reduces the time complexity to O(N) or O(N log N).

-----------------------------------------------------------------------------------------------------------

🚀 When to Use the Two-Pointer Technique?

🔘You can use the two-pointer technique when:

🔘You traverse the array from both ends.

🔘You need to compare or merge elements from different parts of the array.

🔘You want to find pairs or triplets with certain properties.

🔘You need to shrink or expand a window in problems related to subarrays or substrings.

🔘You aim to avoid nested loops for better efficiency.

-----------------------------------------------------------------------------------------------------------

💡Famous Interview Two Pointer Problems

1. Valid Palindrome : https://leetcode.com/problems/valid-palindrome/description/?envType=study-plan-v2&envId=top-interview-150

2. Is Subsequence : https://leetcode.com/problems/is-subsequence/description/?envType=study-plan-v2&envId=top-interview-150

3. https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=top-interview-150

4. Two Sum II - Input array is sorted : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/?envType=study-plan-v2&envId=top-interview-150

5. 3 Sum : https://leetcode.com/problems/3sum/description/?envType=study-plan-v2&envId=top-interview-150

------------------------------------------------------------------------------------------------------------

🔥 Level wise problems 

✅  Easy level:

1. Remove Duplicates From Sorted Array : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=two-pointers

2. Two Sum : https://leetcode.com/problems/two-sum/description/

3. Palindrome Linked List : https://leetcode.com/problems/palindrome-linked-list/description/?envType=problem-list-v2&envId=two-pointers

✅  Medium level:

1. 3Sum : https://leetcode.com/problems/3sum/description/?envType=problem-list-v2&envId=two-pointers

2. Container With Most Water : https://leetcode.com/problems/container-with-most-water/description/?envType=

3. Remove Nth Node From End of List : https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/?envType=problem-list-v2&envId=two-pointers

✅  Hard level:

1. 3Sum Closest : https://leetcode.com/problems/3sum-closest/description/?env

2. Trapping Rain Water : https://leetcode.com/problems/trapping-rain-water/description/?envType=problem-list-v2&envId=two-pointers

3. Sliding Window Maximum : https://leetcode.com/problems/sliding-window-maximum/description/

------------------------------------------------------------------------------------------------------------

🛠️ Sample Two-Pointer Code in C++
✅ Find if there are two numbers in a sorted array that sum up to the target

        #include <iostream>
        #include <vector>
        using namespace std;

        bool twoSum(vector<int>& nums, int target) {
            int left = 0, right = nums.size() - 1;

            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum == target) return true;      // Pair found
                else if (sum < target) left++;       // Increase the left pointer
                else right--;                        // Decrease the right pointer
            }
            return false;
        }

------------------------------------------------------------------------------------------------------------

🚀 Conclusion
The Two-Pointer Technique is a powerful and efficient algorithm that significantly reduces time complexity for many array and string-related problems. It is widely used in competitive programming and real-world applications. 💡

✅ Mastering this technique will help you solve array, string, and sliding window problems efficiently. 🚀

Feel free to ask anything or share your thoughts! 😊

Email: udaychaudhary419@gamil.com

linkedin: https://www.linkedin.com/in/uday-chaudhary-b24b08290/
