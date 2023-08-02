#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts left child node
 * @parent: parent node
 * @value: value
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	left_node = binary_tree_node(parent, value);
	if (!left_node)
		return (left_node);
	parent->left = left_node;
	return left_node;
}
