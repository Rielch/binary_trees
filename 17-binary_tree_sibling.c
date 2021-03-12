#include "binary_trees.h"

/**
 * binary_tree_sibling - Returns the sibiling of the binary tree node
 *
 * @node: node of the binary tree
 * Return: Sibiling of the node or NULL if there is none
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent)
	{
		if (node->parent->left == node)
		{
			return (node->parent->right);
		}
		else
		{
			return (node->parent->left);
		}
	}
	return (NULL);
}
