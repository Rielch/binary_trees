#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates the ammount of nodes with at least one child
 *
 * @tree: binary tree to calculate
 * Return: Number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;
	int has_child = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right != NULL)
	{
		nodes += binary_tree_nodes(tree->right);
		has_child = 1;
	}
	if (tree->left != NULL)
	{
		nodes += binary_tree_nodes(tree->left);
		has_child = 1;
	}
	if (has_child == 1)
	{
		nodes++;
	}
	return (nodes);
}
