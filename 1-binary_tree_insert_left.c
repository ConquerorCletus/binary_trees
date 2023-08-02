#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  a pointer to the node to insert the left-child in
 * @value: the value to store in node.
 * Return: pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *left_t;

	left_t = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	left_t = binary_tree_node(parent, value);
	if (left_t == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		left_t->left = parent->left;
		parent->left->parent = left_t;
	}
	parent->left = left_t;
	return (left_t);
}
