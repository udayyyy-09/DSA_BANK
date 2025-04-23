#include<iostream>
using namespace std;
int main(){
    string s = "aaaa";
    string b = "dog cat cat dog";
    // cout<<b.length();
    // cout<<s.length()<<endl;
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
        cout<<b[i]<<endl;
    }
}