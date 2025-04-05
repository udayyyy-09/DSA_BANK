/*    LeetCode -> 392      ( https://leetcode.com/problems/is-subsequence/description/?envType=study-plan-v2&envId=top-interview-150 )

    Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
    A subsequence of a string is a new string that is formed from the original string by deleting some 
    (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
    Example 1:
    Input: s = "abc", t = "ahbgdc"
    Output: true
*/

#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t) {
    int st = 0 , end = 0;
    while(st < s.size() && end < t.size()){
        if(s[st] == t[end]){
            st++; end++;
        }else{
            end++;
        }
    }
    if(s.size() == st){
        return true;
    }
    return false;
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    cout<<boolalpha<<isSubsequence(s,t)<<endl;

}