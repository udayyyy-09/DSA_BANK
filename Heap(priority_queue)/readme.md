📚 Heap & Priority Queue (C++ STL)

✅ What is a Heap?

A Heap is a special tree-based data structure that satisfies the heap property:
    🔘Max Heap: Parent node is always greater than or equal to its children.
    🔘Max Heap: Parent node is always greater than or equal to its children.

---------------------------------------------------------------------------------------------------------

🧠 What is a Priority Queue?

In C++, a priority queue is a container adapter that provides constant time lookup of the largest (by default) element.

It is typically implemented using a heap.

---------------------------------------------------------------------------------------------------------

🔧 Syntax

        #include <queue>
        priority_queue<int> maxHeap; // Default is Max Heap
        
        priority_queue<int, vector<int>, greater<int>> minHeap; // Min Heap

---------------------------------------------------------------------------------------------------------

📌 Common Operations

![alt text](<Screenshot 2025-04-08 134855.png>)

---------------------------------------------------------------------------------------------------------

📦 Example
Max Heap

        priority_queue<int> pq;
            pq.push(10);
            pq.push(5);
            pq.push(20);
            cout << pq.top(); // 20 (largest element)
            pq.pop();
            cout << pq.top(); // 10

Min Heap

        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(10);
        pq.push(5);
        pq.push(20);
        cout << pq.top(); // 5 (smallest element)
        pq.pop();
        cout << pq.top(); // 10

---------------------------------------------------------------------------------------------------------

💡 Use Cases

Top-K elements

Dijkstra’s shortest path algorithm

Scheduling problems

Merging K sorted lists

---------------------------------------------------------------------------------------------------------

📌 More topics being added regularly! Stay tuned!

Feel free to ask anything or share your thoughts! 😊

Email: udaychaudhary419@gamil.com

linkedin: https://www.linkedin.com/in/uday-chaudhary-b24b08290/