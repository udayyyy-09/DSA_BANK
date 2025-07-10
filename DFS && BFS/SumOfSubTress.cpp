/*          508. Most Frequent Subtree Sum
Given the root of a binary tree, return the most frequent subtree sum. If there is a tie, return all the values with the highest frequency in any order.
The subtree sum of a node is defined as the sum of all the node values formed by the subtree rooted at that node (including the node itself).
*/

//          MAIN SOLUTION

/*
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int>res;
        unordered_map<int,int>mp;
        int maxFreq = 0;
        PostOrder(root,mp,maxFreq);
        for(auto &it:mp){
            if(it.second == maxFreq){
                res.push_back(it.first);
            }
        }
        return res;
    }
    int PostOrder(TreeNode* root,unordered_map<int,int>&mp, int& maxFreq){
        if(!root) return 0;
        int lSum = PostOrder(root->left,mp,maxFreq);
        int rSum = PostOrder(root->right,mp,maxFreq);
        int currSum = lSum + rSum + root->val;
        mp[currSum]++;
        maxFreq = max(maxFreq,mp[currSum]);
        return currSum;

    }    
*/