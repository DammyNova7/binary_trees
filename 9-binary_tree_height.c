#include "binary_trees.h"

/**
 * binary_tree_height - This functions measure the height of a binary tree
 * @tree: Pointer to the root node
 * Return: max of left and right
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_bin_tree, right_bin_tree;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_bin_tree = 1 + binary_tree_height(tree->left);
	right_bin_tree = 1 + binary_tree_height(tree->right);

	if (left_bin_tree > right_bin_tree)
	{
		return (left_bin_tree);
	}

	else
	{
		return (right_bin_tree);
	}

}
