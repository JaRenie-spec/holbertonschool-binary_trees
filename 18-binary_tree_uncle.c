#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a knot
 * @node: Pointer to the node whose uncle we are looking for
 *
 * Return: Pointer to uncle or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Checks if the node, its parent or its grandparent are NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);

/* if parent is the left child of the grandparent, uncle is the right child */
	if (node->parent == node->parent->parent->left)
	return (node->parent->parent->right);

/* Otherwise, the uncle is the left child of the grandparent */
return (node->parent->parent->left);
}
