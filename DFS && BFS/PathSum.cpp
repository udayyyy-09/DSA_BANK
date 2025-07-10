/*     112. PATH SUM                    ( https://leetcode.com/problems/path-sum/description/ )

Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.
A leaf is a node with no children.
*/

//              MAIN FUNCTION

// bool hasPathSum(TreeNode* root, int targetSum) {
//         if(!root) return false;
//         targetSum = targetSum - root->val;
//         if(targetSum == 0 && !root->left && !root->right) return true;
//         return hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum);

// }