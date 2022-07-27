#include "binary_trees.h"

/**
* binary_tree_height_new - mesure the height of a binary tree
*
* @tree: pointer to the root node of the tree to measure the height
*
* Return: hight of the binary tree
*       0 if tree is NULL
*/

int binary_tree_height_new(const binary_tree_t *tree)
{
	int right_height = 0, left_height = 0;

	if (!tree)
		return (0);
	left_height = binary_tree_height_new(tree->left);
	right_height = binary_tree_height_new(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
* binary_tree_balance - measure the balance factor of a binary tree
*
* @tree: pointer to the root node of the tree to measure the balance factor
*
* Return: balance of binary tree
*		0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = (binary_tree_height_new(tree->left));
	right_height = (binary_tree_height_new(tree->right));

	return (left_height - right_height);
}
