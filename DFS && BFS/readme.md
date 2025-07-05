# BFS AND DFS

##### ***BFS***, which stands for Breadth-First Search, is a ***graph traversal algorithm*** that explores a graph level by level, starting from a root node. It visits all the node's immediate neighbors before moving on to the next level of neighbors. This approach is particularly useful for finding the shortest path in ***unweighted graphs.***

#### ***DFS****, Depth-First Search (DFS) is an algorithm for traversing or searching a graph or tree data structure. It explores a branch as far as possible before ***backtracking*** to explore other branches. It's a fundamental algorithm used in various graph-related problems. 

## BREADTH FIRST SEARCH

##### Theory

    - **Approach**: Explores all nodes at the current depth before moving to the next level.

    - **Data Structure**: Uses a queue (FIFO).

    - **Time Complexity**:

        -  Adjacency List: O(V + E)

        - Adjacency Matrix: O(V²)

    - **Space Complexity**: O(V) (queue storage).

    - **Best For**:

        - Shortest path in unweighted graphs.

        - Level-order traversal (e.g., tree level-wise printing).

--------------------------------------------------------------

##### Algorithm Steps

1. Start from the root node, enqueue it.

2. Dequeue a node, process it, and enqueue its unvisited neighbors.

3. Repeat until the queue is empty.

Code C++

            #include <queue>
            #include <vector>
            #include <unordered_set>

            void BFS(int start, vector<vector<int>>& graph) {
                queue<int> q;
                unordered_set<int> visited;
                q.push(start);
                visited.insert(start);

                while (!q.empty()) {
                    int node = q.front();
                    q.pop();
                    cout << node << " "; // Process node

                    for (int neighbor : graph[node]) {
                        if (visited.find(neighbor) == visited.end()) {
                            visited.insert(neighbor);
                            q.push(neighbor);
                        }
                    }
                }
            }

--------------------------------------------------------------

##### Interview Questions

1. Shortest Path in Unweighted Graph

2. Level Order Traversal in Trees

3. Word Ladder (Leetcode 127)

--------------------------------------------------------------

## Depth-First Search (DFS)

##### Theory

    - **Approach**: Explores as far as possible along a branch before backtracking.

    - **Data Structure**: Uses a stack (recursion or explicit stack).

    - **Time Complexity**:

        - Adjacency List: O(V + E)

        - Adjacency Matrix: O(V²)

    - **Space Complexity**:

        - **Recursive**: O(V) (call stack).

        - **Iterative**: O(V) (explicit stack).

    - **Best For**:

        - Pathfinding (mazes).

        - Cycle detection.

        - Topological sorting.

-----------------------------------------------------------

##### Algorithm Steps (Recursive) 

1. Start at the root node, mark as visited.

2. Recursively visit all unvisited neighbors.

3. Backtrack when no more unvisited nodes.

------------------------------------------------------------

Code (C++)

        #include <vector>
        #include <unordered_set>

        void DFS(int node, vector<vector<int>>& graph, unordered_set<int>& visited) {
            visited.insert(node);
            cout << node << " "; // Process node

            for (int neighbor : graph[node]) {
                if (visited.find(neighbor) == visited.end()) {
                    DFS(neighbor, graph, visited);
                }
            }
        }

-------------------------------------------------------------

### Interview Questions

1. Number of Islands (Leetcode 200)

2. Course Schedule (Leetcode 207)

3. Clone Graph (Leetcode 133)

--------------------------------------------------------------

## BFS VS DFS

| Feature          | **Tree**                                                 | **Graph**                                     |
| ---------------- | -------------------------------------------------------- | --------------------------------------------- |
| **Definition**   | A *special type of graph* with no cycles                 | A collection of nodes (vertices) and edges    |
| **Cycle**        | ❌ Cannot have cycles (acyclic)                           | ✅ Can have cycles                             |
| **Connectivity** | ✅ Always connected                                       | Can be connected or disconnected              |
| **Parent-child** | ✅ Has a hierarchical structure (parent-child)            | ❌ No parent-child relationship                |
| **Root Node**    | ✅ Has exactly one root node                              | ❌ No root node                                |
| **Edges**        | Has exactly `n - 1` edges for `n` nodes                  | Can have any number of edges                  |
| **Direction**    | Usually directed from parent to child (for rooted trees) | Can be directed or undirected                 |
| **Usage**        | Used in hierarchy, file systems, decision trees          | Used in maps, social networks, networks, etc. |

--------------------------------------------------------------------------

#### When to Use?

    - **Use BFS** when:

        - Finding the shortest path.

        - Traversing level by level (e.g., social network friends).

    - **Use DFS** when:

        - Exploring all possible paths (e.g., maze solving).

        - Detecting cycles or connected components.

----------------------------------------------------------------------------
