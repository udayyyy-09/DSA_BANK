📚 Best Time to Buy and Sell Stock – README

✅ Problem Statement

You are given an array prices[] where:
prices[i] represents the price of a given stock on the ith day.

You need to determine the maximum profit you can achieve by:

▫️Buying on one day.
▫️Selling on a future day.

💡 Goal:

  ▫️Maximize the profit:
     Profit=prices[j]−prices[i]

----------------------------------------------------------------------------------------------------------

        Input: prices = [7,1,5,3,6,4]  
        Output: 5  
        Explanation:  
        - Buy on day 2 (price = 1).  
        - Sell on day 5 (price = 6).  
        - Profit = 6 - 1 = 5.  

        Input: prices = [7,6,4,3,1]  
        Output: 0  
        Explanation:  
        - No transaction results in a profit.  

----------------------------------------------------------------------------------------------------------

🔥 Constraints

1 <= prices.length <= 10⁵

0 <= prices[i] <= 10⁴

----------------------------------------------------------------------------------------------------------

💡 Key Concept

You want to find:

    Maximum Profit=prices[j]−prices[i]

Where j > i.

    ◽Buy at the lowest price before selling.
    ◽Sell at the highest possible price after buying.

----------------------------------------------------------------------------------------------------------

⚙️ Approach: One-Pass with Two Pointers

1. Initialize Variables:

  ◽minPrice → Track the lowest price encountered so far.
  ◽maxProfit → Track the maximum profit found.

2. Iterate Through the Array:

◽For each day:

    ◽If the current price is lower than minPrice:

        ➝ Update minPrice.

    ◽ Else, calculate the current profit:
        ➝ profit = prices[i] - minPrice.
        ➝ Update maxProfit if the current profit is greater.

3. Return the Maximum Profit:

    ◽After iterating through the entire array, return the maxProfit.
    ◽If no profit is possible, return 0.

----------------------------------------------------------------------------------------------------------

⏱️ Complexity Analysis

Time Complexity: O(N)

Space Complexity: O(1)




