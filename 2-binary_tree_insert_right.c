
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

	right_node = binary_tree_node(parent, value);
	if (!right_node)
		return (right_node);
	parent->right = right_node;
	return right_node;
}
