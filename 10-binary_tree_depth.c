#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node
 *
 * @tree: node to calculate the depth of
 * Return: Depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent);
		depth++;
	}
	return (depth);
}
