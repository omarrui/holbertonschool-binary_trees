#include "binary_trees.h"

/**
* binary_tree_size - counts the number of nodes in a binary tree
*
* @tree: pointer to the root node of the tree
*
* Return: the size of the tree (total number of nodes)
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
