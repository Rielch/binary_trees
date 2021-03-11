#include "binary_trees.h"

/**
 * binary_tree_balance - Calculates the balance of a binary tree
 *
 * @tree: binary tree to calculate
 * Return: Balance of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_l = -1, balance_r = -1;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		balance_l = binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		balance_r = binary_tree_height(tree->right);
	}
	return (balance_l - balance_r);
}

/**
 * binary_tree_height - Calculates the height of a binary tree
 *
 * @tree: binary tree to calculate
 * Return: height of the tree
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
