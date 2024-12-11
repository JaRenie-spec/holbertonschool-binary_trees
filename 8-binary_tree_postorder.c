#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree in postorder
 * @tree: Pointer to the root of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: The function applies `func` to the current node after
 * traversing the left subtree and the right subtree.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	binary_tree_postorder(tree->left, func);/* Traverse the left subtree */
	binary_tree_postorder(tree->right, func);/* Traverse the right subtree */
	func(tree->n);/* Apply the function to the current node */
}
