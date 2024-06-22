#include "binary_trees.h"

/**
 * count_nl - a function that returns count
 * @tree: paremeter tree
 * @count: parameter count
 * Return: returns count
 */

size_t count_nl(const binary_tree_t *tree, size_t count)
{
	if (tree == NULL)
		return (count);
	count = count_nl(tree->left, count);
	if (tree->left != NULL || tree->right != NULL)
		count++;
	count = count_nl(tree->right, count);
	return (count);
}

/**
 * binary_tree_nodes- a function that returns count_nl
 * @tree: arg that takes tree
 * Return: returns count_nl
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (count_nl(tree, 0));
}
