/* In this question we have given a number and k we need to append number k times to the given number.After that we 
find a sum of numbers until sum is one nit
EX: N = 9, k = 2
perform: N will be 999. Now finding sum 9+9+9 = 27 not a one nit then 2+7 = 9 one nit 
therefore answer is 9
*/
#include<bits/stdc++.h>
using namespace std;

int Sum(int num){
    int sum = 0;
    while(num!=0){
        int n = num%10;
        sum += n;
        num = num/10;
    }
    return sum;
}

int onenitSum(int n, int k){
    string str = to_string(n);
    while(k>0){
        str += to_string(n);
        k--;
    }
    int dig = 0;
    for(char c:str){
        dig += c-'0';
    }
    if(dig <=9) return dig;
    while(dig > 9){
        dig = Sum(dig);
        if(dig <=9) return dig;
    }
    return -1;
}


int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int k;
    cout<<"Enter k: ";
    cin>>k;
    cout<<onenitSum(n,k);
}