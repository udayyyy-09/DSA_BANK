#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i=1;i<n;i++){
        ans *= i;
    }
    return ans;
    
}

int main(){
    int n;
    cin>>n;
    int num = 1, count = 0;
    while(true){
        int a = fact(num);
        if(count == n) {
            cout<<n<<"th term: "<<a;
            break;
        }
        count++;
        int b = fact(num+1);
        if(count == n) {
            cout<<n<<"th term: "<<b;
            break;
        }
        count++;
        int sum = a+b;
        if(count == n) {
            cout<<n<<"th term: "<<sum;
            break;
        }
        count++;
        num += 2;
    }
    return -1;
}