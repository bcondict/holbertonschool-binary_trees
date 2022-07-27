#include "binary_trees.h"

/**
* binary_tree_nodes -counts the nodes with at least 1 child in a binary tree
*
* @tree: pointer to the root node of the tree to count the number of nodes
*
* Return: number of nodes with al least 1 child
*		0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_node = 0, left_node = 0;

	if (!tree)
		return (0);

	right_node = binary_tree_nodes(tree->left);
	left_node = binary_tree_nodes(tree->right);
	if (tree->right || tree->left)
		return (right_node + left_node + 1);
	return (0);
}
