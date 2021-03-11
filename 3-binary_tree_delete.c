#include "binary_trees.h"

/**
 * binary_tree_delete - frees a binary tree
 *
 * @tree: Binary tree
 * Return: Void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *right;
	binary_tree_t *left;

	if (tree == NULL)
	{
		return;
	}
	right = tree->right;
	left = tree->left;
	free(tree);
	if (right != NULL)
	{
		binary_tree_delete(right);
	}
	if (left != NULL)
	{
		binary_tree_delete(left);
	}
}
