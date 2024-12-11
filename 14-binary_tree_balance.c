#include "binary_trees.h"

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: If the tree is NULL, the function returns 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
