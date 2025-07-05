/*  100. Same Tree          ( https://leetcode.com/problems/same-tree/description/ )

Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Ex:
Input: p = [1,2,3], q = [1,2,3]
Output: true

*/

#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isSameTree(TreeNode* p, TreeNode* q) {
    // check if both tree are null then both are same
    if(!p && !q) {
        return true;
    }
    // if one tree is null and other is not then both are not same
    if(!p || !q) return false;
    if(p->val != q->val) return false;
    
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main() {
    // Test Case 1: Identical trees
    TreeNode* tree1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode* tree2 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    cout << "Test Case 1: " << (isSameTree(tree1, tree2) ? "Same" : "Different") << endl;

    // Test Case 2: Different trees
    TreeNode* tree3 = new TreeNode(1, new TreeNode(2), nullptr);
    TreeNode* tree4 = new TreeNode(1, nullptr, new TreeNode(2));
    cout << "Test Case 2: " << (isSameTree(tree3, tree4) ? "Same" : "Different") << endl;

    // Test Case 3: One tree is empty
    TreeNode* tree5 = new TreeNode(1);
    TreeNode* tree6 = nullptr;
    cout << "Test Case 3: " << (isSameTree(tree5, tree6) ? "Same" : "Different") << endl;

    return 0;
}

