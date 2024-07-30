#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function insert a child left node
 * @parent: This pointer points to the parent node
 * @value: This pointer represent the data in the node
 * Return: returns left_child_node to be inserted
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child_node, *temp;

	/* Check if parent doesnt exist */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* Create child node*/
	left_child_node = binary_tree_node(parent, value);

	/* Insert child node to the left */
	if (parent->left == NULL)
	{
		parent->left = left_child_node;
	}
	else
	{
		temp = parent->left;
		parent->left = left_child_node;
		left_child_node->left = temp;
		temp->parent = left_child_node;
	}
	return (left_child_node);
}
