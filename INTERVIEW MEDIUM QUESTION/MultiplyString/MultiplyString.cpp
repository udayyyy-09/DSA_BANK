/*    Leetcode ->   43   ( https://leetcode.com/problems/multiply-strings/description/ )

      My Solution:
            https://leetcode.com/problems/multiply-strings/solutions/6659073/beats-100-users-with-simple-solution-by-b1xu5


#include<bits/stdc++.h>
using namespace std;
string multiply(string num1, string num2) {
    int n = num1.size(), m = num2.size();
    string res = "";
    vector<int>v(n+m, 0);
    int carry = 0;
    if((n==1 && num1[0] == '0') || (m==1 && num2[0] == '0') ){
        return "0";
    }
    for(int i=n-1;i>=0;i--){
        for(int j = m-1; j >=0 ;j--){
            int prod =( num1[i]-'0') * (num2[j] - '0');
            int sum = prod + v[i+j+1]; 
            v[i+j+1] = sum%10;
            v[i+j] += sum/10;
        }
    }
    for(int i = 0; i<v.size();i++){
        if(v[i] == 0 && i==0){
            continue;
        }
        res += to_string(v[i]);
    }
    return res;
    
}

int main(){
    string num1; string num2;
    cout<< "Enter the first number: ";
    cin>>num1;
    cout<< "Enter the second number: ";
    cin>>num2;
    cout<< multiply(num1, num2)<<endl;
}

*/