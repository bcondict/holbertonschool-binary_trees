#include "binary_trees.h"

/**
* binary_tree_leaves - cons the leaves in a binary tree
*
* @tree: pointer to the root node of the tree to count the number of leaves
*
* Return: Number of leaves
*       0 if tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
