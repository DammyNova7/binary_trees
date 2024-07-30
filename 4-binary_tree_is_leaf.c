#include "binary_trees.h"

/**
 * binary_tree_is_leaf- This function checks for leaf node
 * @node: This pointer represent node to check
 * Return: 0 if NULL or 1 if node is leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
