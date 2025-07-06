/*   Symmetric Tree                 ( https://leetcode.com/problems/symmetric-tree )
 * 
 * Given a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
 * 
 * Example:
 * 
 *     1
 *    / \
 *   2   2
 *  / \ / \
 * 3  4 4  3
 * 
 * The above binary tree is symmetric.
 * 

*/

#include<bits/stdc++.h>
using namespace std;

// Writing only main function
/* 
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return helper(root->left,root->right);
    }
    int helper(TreeNode* l,TreeNode* r){
        if(!l && !r) return true;
        if(!l || !r) return false;
        if(l->val != r->val) return false;
        return helper(l->left,r->right) && helper(l->right,r->left);
    }
        
*/