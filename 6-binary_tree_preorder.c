#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Si tree ou func est NULL, ne rien faire */
	if (tree == NULL || func == NULL)
		return;

	/*Ordre de parcours: Nœud actuel, sous-arbre gauche, puis sous-arbre droit */
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
