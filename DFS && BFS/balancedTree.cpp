/*

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int ans = height(root);
        return (ans == -1) ? false : true;
    }
    int height(TreeNode* root){
        if(!root) return 0;
        int left = height(root->left);
        if(left == -1) return -1;
        int right = height(root->right);
        if(right == -1) return -1; 
        if(abs(right - left) > 1) return -1;
        return max(left,right)+1;
    }
};

*/