1456.  Maximum Number of Vowels in a Substring of Given Length

Question Link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/

![alt text](<Screenshot 2025-05-29 231036.png>)

-------------------------------------------------------------------------------------------------------------------

Solution:

To solve this problem, we need to find the maximum number of vowels in any substring of length k in the given string s. The approach involves using a sliding window technique to efficiently compute the number of vowels in each possible substring of length k and keep track of the maximum count encountered.

Steps:

1. Initial Check: If the length of the string s is less than k, return 0 since no substring of length k exists.

2. Initialize Vowel Set: Create a set containing all vowels for quick lookup.

3. Initial Window Count: Compute the number of vowels in the first window of length k.

4. Sliding Window: Slide the window one character at a time from the start to the end of the string:

    ->Subtract the count if the outgoing character (leftmost character of the previous window) is a vowel.

    ->Add the count if the incoming character (new rightmost character) is a vowel.

    ->Update the maximum vowel count encountered during the sliding process.

5. Return Result: The maximum vowel count obtained during the sliding process is the answer.

