#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_depth - depth of the node in a tree
 * @tree: node for depth to be checked
 *
 * Return: 0 if parent is null else return 1
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);

}
