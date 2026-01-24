/*      Leetcode -> 70          ( https://leetcode.com/problems/climbing-stairs/description/ )
  
My Solution:      ( https://leetcode.com/problems/climbing-stairs/solutions/6653201/beginners-dp-approach-by-udayyyy09-qof3 )



#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n) {
    if(n<=3) return n; 
    vector<int>dp(n+1,1);
    // I am going to use memoization
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];

}
int main(){
    int n;
    cout<<"Enter N";
    cin>>n;
    cout<<climbStairs(n)<<endl;
    return 0;
}

*/