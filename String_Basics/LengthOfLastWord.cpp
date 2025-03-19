/*  Leetcode -> 58
    Given a string s consisting of words and spaces, return the length of the last word in the string.
    A word is a maximal substring consisting of non-space characters only.
    Ex:
        Input: "   fly me   to   the moon  "
        Output: 4 
        Explaination: The last word in the string is "moon", which has 4 characters. Don't include white space

*/

#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) {
    if(s.size()==1){
        return 1;
    }
    int n = s.size()-1;
    while(s[n] == ' '){
        n--;
    }
    int len = 0;
    while(n>=0){
        if(s[n]!=' '){
            len++;
        }else{
            break;
        }
        n--;
    }
    return len;
}

int main(){
    string s = "My name is Captain Jonny ";
    int res = lengthOfLastWord(s);
    cout<<"Length of last word: "<<res;
}