
#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts right child node
 * @parent: parent node
 * @value: value
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (!parent)
		return (NULL);

	right_node = binary_tree_node(parent, value);
	if (!right_node)
		return (right_node);
	if (!parent->right)
		parent->right = right_node;
	else
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
		parent->right = right_node;
	}
	return (right_node);
}
