/*      Leetcode -> 231     ( https://leetcode.com/problems/power-of-two/description/ )

        My approach: 
            ( https://leetcode.com/problems/power-of-two/solutions/6635179/both-recursive-and-bit-approach-for-begi-w5x5 )
*/
#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
    //solving wuth recursion
    
    // if(n==1) return true;
    // if(n==0) return false;
    // int num = n;
    // if(num%2!=0) return false;
    // return isPowerOfTwo(n/2);

    // Solving with bit manipulation
    if(n == 1) return true;
    if(n <= 0 ) return false;
    if((n & (n-1)) == 0){
        return true;
    }
    return false;
    
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool ans = isPowerOfTwo(n);
    cout<<boolalpha<<ans;

}