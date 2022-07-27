#include "binary_trees.h"

/**
* binary_tree_is_leaf - check if a node is leaf
*
* @node: pointer to the node to check
*
* Return: 1 if node if a leaf, otherwise 0
*       0 if node is NULL
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right || node->left)
		return (0);

	return (1);
}

/**
* binary_tree_is_full - checks if a binary tree is full
*
* @tree: pointer to the root node of the tree to check
*
* Return: 1 if it's a full tree, 0 otherwise
*		0 if tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_node = 0, right_node = 0;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree) == 1)
		return (1);
	left_node = (binary_tree_is_full(tree->left));
	right_node = (binary_tree_is_full(tree->right));
	if (left_node == 0 || right_node == 0)
		return (0);

	return (1);
}
