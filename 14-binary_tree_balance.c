#include "binary_trees.h"

/**
 * binary_tree_balance - Calcule le facteur d’équilibre d’un arbre binaire
 * @tree: Pointeur vers le nœud racine de l’arbre
 *
 * Return: Si l’arbre est NULL, la fonction retourne 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
