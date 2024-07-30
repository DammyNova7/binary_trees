#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function insert a child Right node
 * @parent: This pointer points to the parent node
 * @value: This pointer represent the data in the node
 * Return: returns right_child_node to be inserted
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child_node, *temp;

	/* Check if parent doesnt exist */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* Create child node*/
	right_child_node = binary_tree_node(parent, value);

	/* Insert child node to the right */
	if (parent->right == NULL)
	{
		parent->right = right_child_node;
	}
	else
	{
		temp = parent->right;
		parent->right = right_child_node;
		right_child_node->right = temp;
		temp->parent = right_child_node;
	}

	return (right_child_node);
}
