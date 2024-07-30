#include "binary_trees.h"

/**
* binary_tree_node - This function creates a binary tree node
* @parent: This node points to the parent node
* @value: This is the value of the binary tree node
* Return: the address of binary tree node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	/* Initialize newnode to null */
	newnode = NULL;

	/* Allocate memory for newnode */
	newnode = malloc(sizeof(binary_tree_t));

	/* Check if the malloc was successful */
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	return (newnode);
}
