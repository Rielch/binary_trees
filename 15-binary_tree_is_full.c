#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: binary tree to check
 * Return: 1 if is full and 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL)
	{
		full += binary_tree_is_full(tree->left);
	}
	if (tree->left != NULL)
	{
		full += binary_tree_is_full(tree->right);
	}
	if (full == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
