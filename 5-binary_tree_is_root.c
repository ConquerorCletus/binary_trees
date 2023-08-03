#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node:  a pointer to the node to check
 * Return: 1 if node is root 0 if not and NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	/* a node with no parent is the root */
	if (node->parent == NULL)
		return (1);

	return (0);
}
