#include "binary_trees.h"

/**
 * binary_tree_delete - This function deletes entire binary tree
 * @tree: This pointer represent root node
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* Check if the tree is empty */
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);

}
