#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse un arbre binaire en post-ordre
 * @tree: Pointeur vers la racine de l'arbre à traverser
 * @func: Pointeur vers une fonction à appeler pour chaque nœud
 *
 * Description: La fonction applique `func` au nœud courant après avoir
 * traversé le sous-arbre gauche et le sous-arbre droit.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	binary_tree_postorder(tree->left, func);/* Traverse le sous-arbre gauche */
	binary_tree_postorder(tree->right, func);/* Traverse le sous-arbre droit */
	func(tree->n);/* Applique la fonction au nœud courant */
}
