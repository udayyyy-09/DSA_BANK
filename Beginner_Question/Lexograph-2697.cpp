/*    2697.         Lexicographically Smallest Palindrome   ( https://leetcode.com/problems/lexicographically-smallest-palindrome/description/ )

*/
#include<bits/stdc++.h>
using namespace std;
 string makeSmallestPalindrome(string s) {
        string ans = "";
        int st = 0, end = s.size()-1;
        while(st< end){
            if(s[st] != s[end]){
                if(s[st] > s[end]){
                    s[st] = s[end];
                }else{
                    s[end] = s[st];
                }
            }
            st++; end--;
        }
        return s;
        
}
int main(){
    string s;
    cin>>s;
    cout<< makeSmallestPalindrome(s)<< endl;
}