#include "binary_trees.h"

/**
 * binary_tree_is_root- This function checks for root node
 * @node: This pointer represent node to check
 * Return: 0 if NULL or 1 if node is root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
