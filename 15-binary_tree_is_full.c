#include "binary_trees.h"
/**
 * is_full - a function that checks if the tree is full
 * @tree: an argument that takes tree
 * Return: returns 0 or 1
 */

int is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if ((tree->left == NULL && tree->right == NULL) ||
			(tree->left != NULL && tree->right != NULL))
		return (is_full(tree->left) && is_full(tree->right));
	return (0);
}
/**
 * binary_tree_is_full - a function that checks if a tree is full
 * @tree: an arg that takes tree
 * Return: returns 0 or a function
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (is_full(tree));
}
