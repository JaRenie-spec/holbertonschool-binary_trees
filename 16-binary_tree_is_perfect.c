#include "binary_trees.h"

/*
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * binary_tree_height - Calculates the height of the tree
 * binary_tree_size - Calculates the total number of nodes in the tree
 *
 * Return: 1 if the tree is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size;

	if (tree == NULL)
	{
		return (0);
	}
	/* Calculating tree height */
	height = binary_tree_height(tree);
	/* Calculating the total number of nodes in the tree*/
	size = binary_tree_size(tree);
	/* Calculating the expected size for a perfect tree of height 'height' */
	expected_size = (1 << (height + 1)) - 1;/* 2^(h+1) - 1 */
	/* If the actual size is equal to the desired size, the tree is perfect. */
	return (size == expected_size);
}
