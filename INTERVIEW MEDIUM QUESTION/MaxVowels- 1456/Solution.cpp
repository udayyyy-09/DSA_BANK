#include<bits/stdc++.h>
using namespace std;

bool isVowel(char &c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

int maxVowels(string s, int k) {
        int n = s.size();
        int count = 0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])) count++;
        }
        int maxi = count, st = 0;
        for(int j = k; j< n;j++){
            //remove back char and add new char 
            if(isVowel(s[st])){
                count--;
            }

            if(isVowel(s[j])){
                count++;
            }
            st++;
            maxi = max(maxi,count);
        }
        return maxi;
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int k;
    cout<<"Enter k: ";
    cin>>k;
    cout<<endl<<maxVowels(s,k);
    
}