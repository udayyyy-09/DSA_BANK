#include <iostream>
#include <vector>
#include <algorithm>  // For min and max functions
using namespace std;

// Function to calculate maximum profit
int maxProfit(vector<int>& prices) {
    int maxProfit = 0;            // Store the maximum profit
    int mini = prices[0];         // Initialize with the first price

    // Iterate through the array starting from day 2
    for (int i = 1; i < prices.size(); i++) {
        mini = min(prices[i], mini);  // Track the minimum price so far
        if (mini < prices[i]) {       // If profit is possible
            maxProfit = max(maxProfit, (prices[i] - mini));  // Update maxProfit
        }
    }

    return maxProfit;  // Return the maximum profit
}

// Main function
int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    vector<int> prices(n);  // Array to store stock prices

    cout << "Enter the stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];   // Input stock prices
    }

    // Calculate and display the maximum profit
    int profit = maxProfit(prices);
    cout << "Maximum Profit: " << profit << endl;

    return 0;
}
