#include "binary_trees.h"

/**
* binary_tree_size - measures the size of binary tree
*
* @tree:
*
* Return: size of binary tree, num of nodes
*       0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_node = 0, right_node = 0;

	if (!tree)
		return (0);

	left_node = binary_tree_size(tree->left);
	right_node = binary_tree_size(tree->right);

return (left_node + right_node + 1);
}
