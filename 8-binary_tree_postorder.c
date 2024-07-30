#include "binary_trees.h"

/**
 * binary_tree_postorder - Function uses postorder traversal
 * @tree: a pointer to the root node
 * @func: pointer to a function call for each node
 * Return: nothing
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
