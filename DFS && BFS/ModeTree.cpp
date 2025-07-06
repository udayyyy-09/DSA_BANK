/*  501. Find Mode in Binary Search Tree
    *  (https://leetcode.com/problems/find-mode-in-binary-search-tree/description/)
    * 
    * Given the root of a binary search tree (BST) with duplicates, return all the mode(s) (i.e., the most frequently
    * occurred element) in it.
    * If the tree has more than one mode, return them in any order.
    * Assume a BST is defined as follows:
    * - The left subtree of a node contains only nodes with keys less than the node's key.
    * - The right subtree of a node contains only nodes with keys greater than the node's key.
    * - Both the left and right subtrees must also be binary search trees.
    * 
    * Ex:
    * Input: root = [1,null,2,2]
    * Output: [2]
    *

*/

//Only writing main function

//main function
#include <bits/stdc++.h>
using namespace std;

// vector<int> findMode(TreeNode* root) {
//         vector<int>v;
//         inorder(root,v);
//         unordered_map<int,int>mp;
//         for(int i:v){
//             mp[i]++;
//         }
//         int maxifreq = 0;
//         for(auto &it:mp){
//             maxifreq = max(maxifreq,it.second);
//         }
//         vector<int>res;
//         for(auto &it:mp){
//             if(it.second  == maxifreq){
//                 res.push_back(it.first);
//             }
//         }
//         return res;
//     }
//     void  inorder(TreeNode* root, vector<int>&v){
//         if(!root) return;
//         if(root){
//             inorder(root->left,v);
//             v.push_back(root->val);
//             inorder(root->right,v);
//         }
//     }