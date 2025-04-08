#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise or if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Si node est NULL, retourner 0 */
	if (node == NULL)
		return (0);

	/* Un nœud est une feuille s'il n'a pas d'enfants */
	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
