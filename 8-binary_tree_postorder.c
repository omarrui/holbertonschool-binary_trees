#include "binary_trees.h"

/**
 *binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Si tree ou func est NULL, ne rien faire */
	if (tree == NULL || func == NULL)
		return;

	/*Ordre de parcours: sous-arbre gauche, sous-arbre droit, puis nœud actuel */
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
