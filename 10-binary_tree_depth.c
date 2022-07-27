#include "binary_trees.h"

/**
* binary_tree_depth - measure the depth of a node in a binary tree
*
* @tree: pointer to the node to measure the depth
*
* Return: depth of a node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depht = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree_depht++;
		tree = tree->parent;
	}
	return (tree_depht);
}
