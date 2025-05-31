#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root) return nullptr;
        if (root->val == val) return root;
        if (val < root->val) return searchBST(root->left, val);
        else return searchBST(root->right, val);
    }
};

// Helper function to print the subtree (inorder traversal)
void printTree(TreeNode* root) {
    if (!root) return;
    printTree(root->left);
    cout << root->val << " ";
    printTree(root->right);
}

int main() {
    // Example BST: 
    //       4
    //      / \
    //     2   7
    //    / \
    //   1   3
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution sol;
    int target = 2;
    TreeNode* result = sol.searchBST(root, target);

    if (result) {
        cout << "Found " << target << "! Subtree rooted at " << target << ": ";
        printTree(result);
        cout << endl;
    } else {
        cout << target << " not found in the BST." << endl;
    }

}