# 🏷️ Final Prices With a Special Discount

#### 📌 Problem Statement

You are given an integer array prices.
For each item prices[i], find the first item to the right that has a price less than or equal to prices[i].
Subtract that value as a discount.
If no such item exists, the price remains unchanged.

#### 🔍 Example

        Input

        prices = [8,4,6,2,3]


        Output

        [4,2,4,2,3]


        Explanation

        8 → discount 4 → 8 - 4 = 4

        4 → discount 2 → 4 - 2 = 2

        6 → discount 2 → 6 - 2 = 4

        2 → no discount

        3 → no discount


## 💡 Approach (Optimized)

1. We use a monotonic increasing stack and traverse the array from left to right.

    - The stack stores indices of prices waiting for a discount

    - When a smaller or equal price appears, it becomes the discount for previous prices

    - Each price is pushed and popped only once

2. Traverse from right - left and store values and whenever you found currValue > st.top() pop the element and perform discount 

**TC: O(n)**