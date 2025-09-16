/*         
Given a pointer to the root of a binary tree, print the top view of the binary tree.
The tree as seen from the top the nodes, is called the top view of the tree.


void topView(Node * root) {
    if (!root) return;

    // map<HD, Node->data>
    map<int, int> hdMap;

    // Queue stores {node, HD}
    queue<pair<Node*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        auto [node, hd] = q.front();
        q.pop();

        // Only store the first node we see at each HD
        if (hdMap.find(hd) == hdMap.end()) {
            hdMap[hd] = node->data;
        }

        if (node->left) q.push({node->left, hd - 1});
        if (node->right) q.push({node->right, hd + 1});
    }

    // Print values in order of HD
    for (auto &p : hdMap) {
        cout << p.second << " ";
    }
}

*/