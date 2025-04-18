#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Vérifier si parent est NULL */
	if (parent == NULL)
		return (NULL);

	/* Créer le nouveau nœud */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* Gérer la situation où parent a déjà un enfant droit */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Attacher new_node comme enfant droit de parent */
	parent->right = new_node;

	return (new_node);
}
