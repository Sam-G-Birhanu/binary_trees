#include "binary_trees.h"
/**
 * binary_tree_sibling - a function that returns sibling
 * @node: a parameter taking node
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
/**
 * binary_tree_uncle - a function that returns uncle of a node
 * @node - parameter representing node
 * Return: returns uncle or null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node != NULL && node->parent != NULL)
		return (binary_tree_sibling(node->parent));
	else
		return (NULL);
}
