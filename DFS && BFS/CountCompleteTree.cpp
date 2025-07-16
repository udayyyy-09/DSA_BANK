/*    222. Count Complete Tree Nodes         ( https://leetcode.com/problems/count-complete-tree-nodes/description/  )

Given the root of a complete binary tree, return the number of the nodes in the tree.
According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.
Design an algorithm that runs in less than O(n) time complexity.

Design an algorithm that runs in less than O(n) time complexity.
*/

/*
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int l = leftTree(root);
        int r  = rightTree(root);
        // Acc to the properites of BST if leftH == rightH then tree height == pow(2, L+r)
        if(l == r) return pow(2, l)-1;
        return countNodes(root->left) + countNodes(root->right) +1;
    
    }
    int leftTree(TreeNode* root){
        if(!root) return 0;
        int h = 0;
        TreeNode* temp = root;
        while(temp){
            h++;
            temp = temp->left;
        }
        return h;
    }
    int rightTree(TreeNode* root){
        if(!root) return 0;
        int h = 0;
        TreeNode* temp = root;
        while(temp){
            h++;
            temp = temp->right;
        }
        return h;
    }
};

*/