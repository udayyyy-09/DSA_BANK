Given two strings, s, and sub, along with a 2D character array mappings, we want to 

determine if it is possible to make the sub a substring of s by replacing characters 

according to the provided mappings. Each mapping consists of a pair [oldi, newi],

indicating that we can replace the character oldi in sub with newi.

The replacement can be performed any number of times, but each character in sub can be replaced at most once.

We need to return true if it is possible to create sub as a substring of s using the given replacements, and false otherwise.

Example 1:

Input:
s = “fool3e7bar”
sub = “leet”
mappings = [[“e”,”3″],[“t”,”7″],[“t”,”8″]]
Output: True

Explanation:
We replace the first occurrence of ‘e’ in sub with ‘3’ and ‘t’ in sub with ‘7’, resulting in sub becoming “l3e7”. Now, “l3e7” is a substring of s, so we return true.