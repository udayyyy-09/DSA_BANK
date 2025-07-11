/*  404. Sum of Left Leaves         ( https://leetcode.com/problems/sum-of-left-leaves/ )

    Given the root of a binary tree, return the sum of all left leaves.
    
    A leaf is a node with no children. A left leaf is a leaf that is the left child of its parent.
    
    Example 1:
    
    Input: root = [3,9,20,null,null,15,7]
    Output: 24
    Explanation: There are two left leaves in the binary tree, with values 9 and 15 respectively.
    
    Example 2:
    
    Input: root = [1]
    Output: 0
    
    Constraints:
    
        The number of nodes in the tree is in the range [1, 1000].
        -1000 <= Node.val <= 1000
*/
#include<bits/stdc++.h>
using namespace std;

//Main Function Only
// int sumOfLeftLeaves(TreeNode* root){
//     return helper(root);
// }
// int helper(TreeNode* root){
//     int sum = 0;
//     if(!root) return 0;
//     if(root->left && !root->left->left && !root->left->right){
//         sum += root->left->val;
//     }
//     sum += sumOfLeftLeaves(root->left);
//     sum += sumOfLeftLeaves(root->right);
//     return sum;
// }