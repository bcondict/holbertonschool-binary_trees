#include "binary_trees.h"
/**
* binary_tree_node - create a binary tree node
*
* @parent: pointer to the parent nore of the node to create
* @value: value to put in the new node
*
* Return: a pointer to the new node or null on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_node = NULL;

	parent_node = malloc(sizeof(binary_tree_t));
	if (parent_node == NULL)
		return (NULL);

	parent_node->parent = parent;
	parent_node->n = value;
	parent_node->left = NULL;
	parent_node->right = NULL;

	return (parent_node);
}
