/*          Leetcode ->  746        ( https://leetcode.com/problems/min-cost-climbing-stairs/description/ )

My solution:   ( https://leetcode.com/problems/min-cost-climbing-stairs/solutions/6653231/beginner-dp-approach-beats-100-users-by-v3v1w )

*/
#include <bits/stdc++.h>
using namespace std;
int minCostClimbingStairs(vector<int>& cost) {
    vector<int>dp(cost.size()+1);
    int n = cost.size();
    dp[0] = cost[0];
    dp[1] = cost[1];
    for(int i=2;i<cost.size();i++){
        dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
    
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    vector<int> cost(n);

    cout << "Enter the cost for each step:\n";
    for(int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    cout << "Minimum cost to reach the top: " << minCostClimbingStairs(cost) << endl;

    return 0;
}