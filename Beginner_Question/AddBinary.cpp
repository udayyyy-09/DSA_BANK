/*          Leetcode -> 67      ( https://leetcode.com/problems/add-binary/description/ )

            My Solution:   
                ( https://leetcode.com/problems/add-binary/solutions/6659006/beginner-approach-beats-100-users-by-uda-iaty )
*/

#include<bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
    int carry = 0;
    string res = "";
    int i = a.size()-1, j = b.size()-1;
    while(i >=0 && j>=0){
        int sum = a[i]- '0' + b[j] - '0' + carry;
        if(sum%2 == 0){
            res += "0";
        }else{
            res += "1";
        }
        carry = sum/2;
        j--; i--;
    }
    while(i >=0){
            int sum =a[i] -'0' + carry;
            if(sum %2 == 0){
                res += "0";
            }else {
                res += "1";
            }
            carry = sum/2;
        i--;
       
    }
    while(j >=0){           
        int sum =b[j] -'0' + carry;
        if(sum %2 == 0){
            res += "0";
        }else {
            res += "1";
        }
        carry = sum/2;
        j--;
       
    }
    if(carry!=0){
        res += to_string(carry);
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    string a;string b;
    cout << "Enter the first binary number: ";
    cin >> a;
    cout << "Enter the second binary number: ";
    cin >> b;
    cout << "The sum of the two binary numbers is: " << addBinary(a, b);

}