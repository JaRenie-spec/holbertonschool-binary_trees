#include "binary_trees.h"

/**
 * binary_tree_uncle - Trouve l’oncle d’un nœud
 * @node: Pointeur vers le nœud dont on cherche l’oncle
 *
 * Return: Pointeur vers l'oncle ou NULL si aucun oncle n'existe
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Vérifie si le nœud, son parent ou son grand-parent sont NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);

/* if le parent is l'enfant gauche du grand-parent, uncle is l'enfant droit */
	if (node->parent == node->parent->parent->left)
	return (node->parent->parent->right);

/* Sinon, l’oncle est l’enfant gauche du grand-parent */
return (node->parent->parent->left);
}
