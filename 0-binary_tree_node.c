#include "binary_trees.h"

/**
 * binary_tree_node - creates a node for a binary tree
 *
 * @parent: Pointer to the parent node
 * @value: value to store in the node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
