## 2785. Sort Vowels in a String

Given a 0-indexed string s, permute s to get a new string t such that:

All consonants remain in their original places. More formally, if there is an index i with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i].

The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of indices i, j with 0 <= i < j < s.length such that s[i] and s[j] are vowels, then t[i] must not have a higher ASCII value than t[j].
Return the resulting string.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in lowercase or uppercase. Consonants comprise all letters that are not vowels.

## Approach

1. first take all the vowels in a string vowel then sort it(Sorting will make vowels sort according to their acsii values)
2. Then start with a loop iterate in i/p string and check for non-vowels and store them in result string. If vowel encounter take first vowel from vowel string and add it in res and increase pointer of vowel string to right side

3. return res string