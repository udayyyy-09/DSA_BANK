/*      Leetcode->   28    ( https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/ )

        Find the Index of the First Occurrence in a String
        Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

        Example 1: 
            Input: haystack = "sadbutsad", needle = "sad"
            Output: 0
            Explanation: "sad" occurs at index 0 and 6.
            The first occurrence is at index 0, so we return 0. 

*/
//-------------------------------------------------------------------------------------------------------------------------

/*          Approach: 
    we use two pointer approach to solve this problem. We start from the beginning of the haystack and needle strings.
    We compare the characters at the current position of both strings. If they match, we move to next char until j==m
    (m is the length of the needle string). If we reach the end of the needle string return the idx which is i.
*/

#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle) {
    int n = haystack.size(), m = needle.size();
    if(m>n) return -1;
    for(int i=0;i<n;i++){
        int j = 0;
        while(j<m ){
            if(haystack[i+j] == needle[j]){
                j++;
            }else{
                break;
            }
        }
        if(j == m) return i;
    }
    return -1;
}
int main(){

    string s1 = "leetcode";
    string s2 = "leeto";
    int res = strStr(s1,s2);
    cout<<"first occurence of needle string in haystack is: "<<res;
}