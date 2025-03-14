📌Map - Basic Concepts

What is a Map?

A map is a data structure that stores key-value pairs.
It allows fast retrieval, insertion, and deletion of values based on keys.

========================================
Types of Maps in C++🔥

map (Ordered Map)🚀

🔘Stores key-value pairs in sorted order (by key).

🔘Uses Red-Black Tree (Balanced BST).

🔘Operations: O(log n) (insert, erase, find).

Syntax:
         map<int, string> mp;


unordered_map🚀

🔘Stores key-value pairs in random order.
🔘Uses Hash Table.
🔘Operations: O(1) (average case), O(n) (worst case in hash collisions).
Syntax: 
        unordered_map<int, string> ump;


Basic Operations in C++

1. Decleration✅
                map<int, string> mp;
                unordered_map<int, string> ump;

2. Insertion📝
                mp[1] = "one";  // Insert using []
                mp.insert({2, "two"});  // Insert using insert()

3. Retrieval📊

                cout << mp[1];   // Output: one
                cout << mp.at(2);  // Output: two

4. Check if Key Exist?🚧

                if (mp.find(3) != mp.end()) {
                    cout << "Key exists";
                } else {
                    cout << "Key not found";
                }

5. Erase🚮
                mp.erase(2);

6. Iterate Through Map💡
                for(auto it : mp) {
                    cout << it.first << " -> " << it.second << endl;
                }


![alt text](<Screenshot 2025-03-13 141843.png>)


Note🚨

Uordered_map is goona use a lot because it is faster than map and have O(1) time complexity.


Study in Detials: https://www.geeksforgeeks.org/map-in-cpp/ and https://www.geeksforg

Thankyou🎖️
