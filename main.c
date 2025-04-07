#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* For size_t*/

/* Binary tree node structure */
typedef struct binary_tree
{
	int n;

	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* Task 0: Create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Task 1: Insert a node as a left child */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Task 2: Insert a node as a right child */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Task 3: Delete a binary tree */
void binary_tree_delete(binary_tree_t *tree);

/* Task 4: Check if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Task 5: Check if a node is a root */
int binary_tree_is_root(const binary_tree_t *node);

/* Task 6: Traverse the tree in pre-order */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Task 7: Traverse the tree in in-order */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Task 8: Traverse the tree in post-order */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Task 9: Print the binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* Task 10: Check if a tree is balanced */
int binary_tree_is_balanced(const binary_tree_t *tree);

/* Task 11: Find the depth of a tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Task 12: Get the size of the binary tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* Task 13: Get the number of leaves in a tree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Task 14: Find the sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Task 15: Find the uncle of a node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* Task 16: Print the tree in a 2D style */
void binary_tree_print(const binary_tree_t *tree);

/* Task 17: Check if the binary tree is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* Task 18: Check if a tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

#endif
