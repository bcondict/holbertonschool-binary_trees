<!-- # 0x1D. C - Binary trees -->
# Holberton School Binary Trees

This repository contains a collection of files related to binary trees, which have been developed as part of the curriculum at Holberton School. These files provide an introduction to binary tree data structures and cover various operations and algorithms associated with them.

![binary_trees](images/Binary_tree_v2.png)

### Concepts
1. What is a binary tree:
    - A binary tree is a hierarchical data structure composed of nodes, where each node can have at most two children, referred to as the left child and the right child. The nodes are connected through edges, and a special node called the root represents the topmost node in the tree.
2. What is the difference between a binary tree and a Binary Search Tree
    - While both binary trees and Binary Search Trees (BSTs) are binary tree data structures, the main difference lies in their ordering property. In a binary tree, there are no specific rules regarding the ordering of nodes. However, in a Binary Search Tree, for any given node, all nodes in its left subtree have values smaller than the node's value, and all nodes in its right subtree have values greater than the node's value. This ordering property of BSTs enables efficient searching, insertion, and deletion operations.
3. What is the possible gain in terms of time complexity compared to linked lists
    - Binary trees offer significant gains in terms of time complexity compared to linked lists, particularly for operations such as searching, insertion, and deletion. While linked lists have a time complexity of O(n) for these operations, binary trees (specifically balanced binary trees) can achieve an average time complexity of O(log n), resulting in faster and more efficient operations as the number of elements increases.
4. What are the depth, the height, the size of a binary tree
    - The depth of a node in a binary tree refers to the number of edges from the root node to that particular node.
    - The height of a binary tree is the maximum depth among all the nodes in the tree, representing the length of the longest path from the root to any leaf node.
    - The size of a binary tree represents the total number of nodes in the tree, including both internal nodes and leaf nodes.
5. What are the different traversal methods to go through a binary tree
    There are three common traversal methods for binary trees:
    - Preorder traversal: In preorder traversal, the root node is visited first, followed by a recursive traversal of the left subtree, and then the right subtree.
    - Inorder traversal: In inorder traversal, the left subtree is recursively traversed first, followed by visiting the root node, and finally, the right subtree is traversed.
    - Postorder traversal: In postorder traversal, the left subtree is recursively traversed first, then the right subtree, and finally, the root node is visited.
6. What is a complete, a full, a perfect, a balanced binary tree
    - A complete binary tree is a binary tree in which all levels, except possibly the last level, are completely filled, and all nodes are as far left as possible on their respective levels.
    - A full binary tree is a binary tree in which every node has either 0 or 2 children. There are no nodes with only one child.
    - A perfect binary tree is a binary tree in which all the internal nodes have exactly two children, and all leaf nodes are at the same level.
    - A balanced binary tree is a binary tree in which the heights of the left and right subtrees of every node differ by at most one. This property ensures that the tree remains relatively balanced, optimizing the efficiency of various operations.


### Learning Objectives
Throughout the study of these files, you will learn:

- How to implement a binary tree node structure
- How to insert nodes into a binary tree
- How to delete nodes from a binary tree
- How to traverse a binary tree in preorder, inorder, and postorder
- How to determine the height of a binary tree
- How to calculate the depth of a binary tree
- How to count the number of nodes in a binary tree
- How to count the number of leaves in a binary tree
- How to check if a binary tree is full
- How to check if a binary tree is perfect
- How to find the sibling of a node in a binary tree
- How to find the uncle of a node in a binary tree
- How to calculate the balance factor of a binary tree

### Files
The repository contains the following files:

- `0-binary_tree_node.c`: Implementation of a function to create a binary tree node.
- `1-binary_tree_insert_left.c`: Implementation of a function to insert a node as the left child of a given node.  
- `2-binary_tree_insert_right.c`: Implementation of a function to insert a node as the right child of a given node.
- `3-binary_tree_delete.c`: Implementation of a function to delete an entire binary tree.
- `4-binary_tree_is_leaf.c`: Implementation of a function to check if a node is a leaf in a binary tree.
- `5-binary_tree_is_root.c`: Implementation of a function to check if a node is the root of a binary tree.
- `6-binary_tree_preorder.c`: Implementation of a function to traverse a binary tree in the preorder traversal order.
- `7-binary_tree_inorder.c`: Implementation of a function to traverse a binary tree in the inorder traversal order.
- `8-binary_tree_postorder.c`: Implementation of a function to traverse a binary tree in the postorder traversal order.
- `9-binary_tree_height.c`: Implementation of a function to calculate the height of a binary tree.
- `10-binary_tree_depth.c`: Implementation of a function to calculate the depth of a given node in a binary tree.
- `11-binary_tree_size.c`: Implementation of a function to calculate the size (number of nodes) of a binary tree.
- `12-binary_tree_leaves.c`: Implementation of a function to count the number of leaves in a binary tree.
- `13-binary_tree_nodes.c`: Implementation of a function to count the number of nodes with at least one child in a binary tree.
- `14-binary_tree_balance.c`: Implementation of a function to calculate the balance factor of a binary tree.
- `15-binary_tree_is_full.c`: Implementation of a function to check if a binary tree is full.
- `16-binary_tree_is_perfect.c`: Implementation of a function to check if a binary tree is perfect.
- `17-binary_tree_sibling.c`: Implementation of a function to find the sibling of a given node in a binary tree.
- `18-binary_tree_uncle.c`: Implementation of a function to find the uncle of a given node in a binary tree.
- `binary_trees.h`: Header file containing function prototypes and the binary tree structure definition.

Feel free to explore each file for detailed code implementations and explanations of the respective concepts.

#### Further Investigation
To deepen your understanding of binary trees, you may consider investigating the following topics:

- Binary search trees
- AVL trees
- Red-black trees
- Heap data
