/*


#include<bits/stdc++.h>
using namespace std;

int helper(int n){
   if(n == 1) return 1;
   vector<int>coin = {1,2,5,10};
  
   vector<int>dp(n+1, 0);
   dp[0] = 1;     //if no coin only 1 way
   for(int i =0;i<coin.size();i++){
        for(int j = coin[i];j<=n;j++){
            dp[j] += dp[j - coin[i]];
        }
   }
   return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<helper(n);
    
    
}
    

*/