#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_left - Inserts a node as the left-child of another node
* @parent: A pointer to the node to insert the left-child in
* @value: The value to store in the new node
*
* Return: A pointer to the created node, or NULL on failure
*         If parent already has a left-child, the new node takes its place
*         and the old left-child becomes the left-child of the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* If parent already has a left child */
	if (parent->left != NULL)
	{
		/* Make the current left child the left child of the new node */
		new_node->left = parent->left;
		/* Update the parent pointer of the old left child */
		parent->left->parent = new_node;
	}

	/* Set the new node as the left child of the parent */
	parent->left = new_node;

	return (new_node);
}
