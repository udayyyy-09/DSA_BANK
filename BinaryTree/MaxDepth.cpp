/*  104. Maximum Depth of Binary Tree           ( https://leetcode.com/problems/maximum-depth-of-binary-tree/description/?envType=study-plan-v2&envId=top-interview-150 )
Given the root of a binary tree, return its maximum depth.
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

*/

#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to calculate maximum depth using BFS
int maxDepth(TreeNode* root) {
    int left = 0,right = 0;
    if(root==NULL){
        return 0;
    }
    left = maxDepth(root->left);
    right = maxDepth(root->right);
    return max(left,right)+1;
}

int main() {
    // Build sample binary tree:
    //       1
    //     /   \
    //    2     3
    //   / \
    //  4   5

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    int depth = maxDepth(root);
    cout << "Maximum depth of the tree: " << depth << endl;

    return 0;
}