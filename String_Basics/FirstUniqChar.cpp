/*Leetcode -> 387
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
s = "leetcode"
Output: 0
Explanation: The character 'l' at index 0 is the first character that does not occur at any other index.
*/
#include<iostream>
#include<unordered_map>
using namespace std;
int firstUniqChar(string s) {
    unordered_map<char,int>mp;
    int idx = -1;
    for(char c:s){
        mp[c]++;     //storing character frequencies
    }
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==1){
            idx = i;
            break;
        }
    }
    return idx;
}
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<firstUniqChar(s)<<endl;
}