#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of the binary tree
 *
 * @tree: binary tree
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left = binary_tree_height(tree->left);
		left++;
	}
	if (tree->right != NULL)
	{
		right = binary_tree_height(tree->right);
		right++;
	}
	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}
}
