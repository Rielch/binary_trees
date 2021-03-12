#include "binary_trees.h"

/**
 * calc_exp - calculates the exponent of a number
 *
 * @n: number to calculate
 * @exp: exponent
 * Return: result
 */

int calc_exp(int n, int exp)
{
	int result;

	if (exp == 0)
		return (1);
	result = (calc_exp(n, exp - 1));
	return (result * n);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: tree to check
 * Return: 1 if it's perfect and 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, result;

	if (tree == NULL)
	{
		return (0);
	}
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	result = calc_exp(2, height + 1) - 1;
	if (size == result)
		return (1);
	else
		return (0);
}


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
