#include "binary_trees.h"
/**
 * binary_tree_sibling - a function that finds  sibling
 * @node: parameter representing a node
 * Return: returns sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node != NULL && node->parent != NULL)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	else
		return (NULL);
}
