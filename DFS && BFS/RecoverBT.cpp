/*    99. Recover Binary Search Tree            ( https://leetcode.com/problems/recover-binary-search-tree/description/ )
You are given the root of a binary search tree (BST), where the values of exactly two nodes of the tree were swapped by mistake. 
Recover the tree without changing its structure.

*/

//                          MAIN SOLUTION

/*
Class Solution{
Public: 
    TreeNode* prev  = NULL;
    TreeNode* first  = NULL;
    TreeNode* sec = NULL;

    void helper(TreeNode* root){
        if(!root) return;
        helper(root->left);
        if(prev != NULL && prev->val > root->val){
            if(start == NULL){
                start = prev;
            }
            sec = root;
        }   
        prev = root;
        helper(root->right);
        
    }
                
    void RecoverTree(TreeNode* root){
        if(!root) return;
        helper(root);
        TreeNode* temp = start;
        start = sec;
        sec = temp;
    }

};

*/