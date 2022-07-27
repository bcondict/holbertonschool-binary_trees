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
* binary_tree_height - mesure the height of a binary tree
*
* @tree: pointer to the root node of the tree to measure the height
*
* Return: hight of the binary tree
*       0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);

	return (right_height + 1);
}
