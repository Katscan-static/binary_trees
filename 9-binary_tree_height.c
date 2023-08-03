#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_height - detertmines the height of a node in a  tree
 * @tree: tree to be tested
 *
 * Return: 0 else return 1 if node is not leaf
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_value, right_value;

	if (!tree)
		return (0);

	left_value = binary_tree_height(tree->left);
	right_value = binary_tree_height(tree->right);

	if (!tree->left && !tree->right)
		return (0);
	return ((left_value > right_value ? left_value : right_value) + 1);
}
