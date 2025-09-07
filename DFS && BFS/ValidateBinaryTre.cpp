/*      98. Validate Binary Search Tree
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
A valid BST is defined as follows:
The left subtree of a node contains only nodes with keys strictly less than the node's key.
The right subtree of a node contains only nodes with keys strictly greater than the node's key.
Both the left and right subtrees must also be binary search trees.


class Solution {
public:
    bool isValidBST(TreeNode* root) {
        // if(!root) return true;
        return helper(root, LONG_MAX, LONG_MIN);
    }
    bool helper(TreeNode* root, long maxi, long mini){
        if(!root) return true;
        if(mini >= root->val || maxi <= root->val){
            return false;
        }
        return helper(root->left, root->val, mini) && helper(root->right, maxi, root->val);

    }

};

*/

