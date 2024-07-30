#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary_tree
 * @tree: Pointer to root node
 * Return: Size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
