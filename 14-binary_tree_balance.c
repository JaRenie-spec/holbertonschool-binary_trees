#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftheight, rightheight;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);

	if (leftheight >= rightheight)
		return (leftheight + 1);
	else
		return (rightheight + 1);
}

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
