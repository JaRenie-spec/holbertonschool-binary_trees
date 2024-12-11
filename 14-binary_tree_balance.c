#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
