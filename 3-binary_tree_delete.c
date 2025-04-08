#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* First delete left subtree */
	binary_tree_delete(tree->left);

	/* Then delete right subtree */
	binary_tree_delete(tree->right);

	/* Finally, free the current node */
	free(tree);
}
