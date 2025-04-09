#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: Number of leaves in the tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Si l'arbre est NULL, retourner 0 */
	if (tree == NULL)
		return (0);

	/* Si c'est une feuille (pas d'enfants), retourner 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*Sinon, calculer récursivement le nombre de feuilles dans les sous-arbres*/
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
