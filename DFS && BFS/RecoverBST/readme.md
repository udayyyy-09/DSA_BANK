🧩 Problem

You are given a Binary Search Tree (BST) where exactly two nodes are swapped by mistake.
Your task is to recover the BST without changing its structure.

💡 Idea / Approach

A valid BST’s inorder traversal always produces a sorted sequence of node values.
So, if two nodes are swapped, this sorted order will break at one or two points.

We can detect those two misplaced nodes during an inorder traversal:

Keep track of the previous node (prev).

Whenever prev->val > curr->val, it’s a violation:

The first violation’s previous node → first

The second violation’s current node → second

After traversal, swap their values to restore the BST.

🧠 Algorithm (O(n) time, O(h) space)

Perform inorder traversal.

Track prev, first, and second.

Identify the two nodes that are misplaced.

Swap their values.