#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a node is in the root pos
*
* @node: pointer to check
*
* Return: 1 if node is root 0if it aint
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
