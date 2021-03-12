#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 *
 * @node: node to find the uncle
 * Return: uncle of the node or NULL if doesn't have one
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent)
	{
		if (node->parent->parent)
		{
			if (node->parent->parent->left == node->parent)
			{
				return (node->parent->parent->right);
			}
			else
			{
				return (node->parent->parent->left);
			}
		}
	}
	return (NULL);
}
