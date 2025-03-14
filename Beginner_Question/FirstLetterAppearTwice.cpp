/* LEETCODE -->  2351(Prblm No.)
Given a string s consisting of lowercase English letters, return the first letter to appear twice.
Note:
A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
s will contain at least one letter that appears twice.
-----------------------------------------------------------------------
Input: s = "abccbaacz"
Output: "c"
Explanation:
The letter 'a' appears on the indexes 0, 5 and 6.
The letter 'b' appears on the indexes 1 and 4.
The letter 'c' appears on the indexes 2, 3 and 7.
The letter 'z' appears on the index 8.
The letter 'c' is the first letter to appear twice, because out of all the letters the index of its second occurrence is the smallest.
*/
#include <bits/stdc++.h>
using namespace std;
char repeatedCharacter(string s) {
    //In this you come to know about new concept [SET] which is important you can check it in my repo.
    set<char>st;        //set stores the unique char and non repeated
    for(int i=0;i<s.size();i++){
        if(st.find(s[i])!=st.end()){
            return s[i];
        }
        st.insert(s[i]);      //inserting the char in set
    }
    return '0';        
}
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<repeatedCharacter(s)<<endl;
}