# 🌲 Binary Tree Overview

**A Binary Tree** is a hierarchical data structure in which each node has at most two children: a **left child** and a **right child**. Binary trees are commonly used in search problems, hierarchical models, and for building fast-access data structures like binary search trees, heaps, and expression trees.

----------------------------------------------------------------------

## 🧱 Structure of a Binary Tree Node in C++ || Java

        #CPP
        void deleteTree(TreeNode* root) {
            if (!root) return;
            deleteTree(root->left);
            deleteTree(root->right);
            delete root;
        }

        #JAVA
        class TreeNode {
            int val;
            TreeNode left;
            TreeNode right;

            TreeNode(int val) {
                this.val = val;
            }
        }

-------------------------------------------------------

## 🛠 Common Operations

### ✅ Traversals

- Inorder (L → Root → R): Left subtree → Node → Right subtree
- Preorder (Root → L → R): Node → Left subtree → Right subtree
- Postorder (L → R → Root): Left → Right → Node
- Level Order (BFS): Traverse level by level using a queue

-------------------------------------------------------

### ✏️ Sample Utility Function

#### Printing Inorder Traversal

        #CPP
        void printInorder(TreeNode* root) {
            if (!root) return;
            printInorder(root->left);
            cout << root->val << " ";
            printInorder(root->right);
        }

        #JAVA
        void inorder(TreeNode root) {
            if (root == null) return;
            inorder(root.left);
            System.out.print(root.val + " ");
            inorder(root.right);
        }

--------------------------------------------

## 💡 Tips

- Recursion is your best friend for most binary tree problems.
- When in doubt, draw the tree!
- Debug by printing traversal outputs.
