#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_size - get size of tree from node
 * @tree: node to get size of
 *
 * Return: 0 if tree is null else return number of nodes
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_v, right_v;

	if (!tree)
		return (0);

	left_v = binary_tree_size(tree->left);
	right_v = binary_tree_size(tree->right);

	return (left_v + right_v + 1);
}
