#include "binary_trees.h"

/*
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
 * @tree: Pointeur vers le nœud racine de l’arbre
 * binary_tree_height - Calcul de la hauteur de l'arbre
 * binary_tree_size - Calcul du nombre total de nœuds dans l'arbre
 *
 * Return: 1 si l’arbre est parfait sinon 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size;

	if (tree == NULL)
	{
		return (0);
	}
	/* Calcul de la hauteur de l'arbre */
	height = binary_tree_height(tree);
	/* Calcul du nombre total de nœuds dans l'arbre*/
	size = binary_tree_size(tree);
	/* Calcul de la taille attendue pour un arbre parfait de hauteur 'height' */
	expected_size = (1 << (height + 1)) - 1;/* 2^(h+1) - 1 */
	/* Si la taille réelle est égale à la taille voulu, l'arbre est parfait */
	return (size == expected_size);
}
