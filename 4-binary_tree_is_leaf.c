#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 *
 * @node: node to check
 * Return: 1 if is leaf 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->right != NULL || node->left != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
