#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * binary_tree_height - Calculate the height of the tree
 * binary_tree_size - Calculate the total number of nodes in the tree
 *
 * Return: 1 if tree is perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size;

	if (tree == NULL)
	{
		return (0);
	}

	height = binary_tree_height(tree);

	size = binary_tree_size(tree);

	expected_size = (1 << (height + 1)) - 1;

	return (size == expected_size);
}
