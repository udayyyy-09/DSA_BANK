#include<bits/stdc++.h>
using namespace std;
int StringSearch(string p, string t){
    int n = p.size(), m = t.size();
    for(int i = 0;i<n-m;i++){
        int j = 0;
        while(j<m && p[i+j] == t[j]){
            j++;
        }
        if(j == m) return i;
    }
    return -1;

}
int main(){
    string p = "abcababcabac";
    string t = "abaa";
    cout<<StringSearch(p,t);

}