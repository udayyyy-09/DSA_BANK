/*  

    class Solution {
public:
    TreeNode* first = NULL;
    TreeNode* sec = NULL;
    TreeNode* prev = NULL;

    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        if(prev!= NULL && prev->val > root->val){
            if(first == NULL){
                first = prev;
            }
            sec = root;
        }
        prev = root;
        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        if(!root) return;
        inorder(root);
        swap(first->val, sec->val);
    }
    
};

*/