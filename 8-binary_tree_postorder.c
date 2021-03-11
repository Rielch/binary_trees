#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes trought a binary tree using post-order traversal
 *
 * @tree: tree to traverse
 * @func: funcion to call for each node
 * Return: Void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, (func));
	binary_tree_postorder(tree->right, (func));
	func(tree->n);
}
