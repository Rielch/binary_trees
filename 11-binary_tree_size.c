#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree
 *
 * @tree: node to calculate the size
 * Return: Size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l = 0, size_r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right != NULL)
	{
		size_r = binary_tree_size(tree->right);
	}
	if (tree->left != NULL)
	{
		size_l = binary_tree_size(tree->left);
	}
	return (size_l + size_r + 1);
}
