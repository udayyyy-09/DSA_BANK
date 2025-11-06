/*

void flatten(TreeNode* root){
    if(!root) return;
    //flatten left then right

    flatten(root->left);
    flatten(root->right);

    //store the right subtree
    TreeNode* temp = root->right;

    //join left tree with right 
    root->right = root->left;
    root->left = NULL;

    //after joining left tree, go to the end of it and attach the stored right subtree
    TreeNode* curr = root;
    while(curr->right){
        curr = curr->right;
    }
    curr->right = temp;
}

//stack approach

void flatten(TreeNode* root){
    if(!root) return;
    
}
*/