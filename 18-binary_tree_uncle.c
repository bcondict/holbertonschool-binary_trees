#include "binary_trees.h"

/**
 * binary_tree_uncle - find the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to it's uncle, NULL if it has no uncle
 *		NULL if node or parent are NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
