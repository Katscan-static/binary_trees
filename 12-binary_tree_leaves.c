#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_leaves - get number of leaves for a tree
 * @tree: tree node
 *
 * Return: number of leave nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_v = 0, right_v = 0;

	if (!tree)
		return (0);

	left_v = binary_tree_leaves(tree->left);
	right_v = binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
		return (left_v + right_v + 1);


	return (left_v + right_v);
}
