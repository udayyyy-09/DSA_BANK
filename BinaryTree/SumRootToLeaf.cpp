/*   129. Sum Root to Leaf Numbers          ( https://leetcode.com/problems/sum-root-to-leaf-numbers/description/ )

You are given the root of a binary tree containing digits from 0 to 9 only.
Each root-to-leaf path in the tree represents a number.

For example:
the root-to-leaf path 1 -> 2 -> 3 represents the number 123.
Return the total sum of all root-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.
A leaf node is a node with no children.

*/
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// DFS function to calculate root-to-leaf numbers
int DFS(TreeNode* node, int sum) {
    if (!node) return 0;
    sum = sum * 10 + node->val;
    if (!node->left && !node->right) {
        return sum;
        sum = 0;
    }
    return DFS(node->left, sum) + DFS(node->right, sum);
}

int sumNumbers(TreeNode* root) {
    return DFS(root, 0);
}

int main() {
    // Example tree:
    //       1
    //      / \
    //     2   3
    // This represents numbers 12 and 13, sum = 25

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    int totalSum = sumNumbers(root);
    cout << "Total sum of root-to-leaf numbers: " << totalSum << endl;

    return 0;
}