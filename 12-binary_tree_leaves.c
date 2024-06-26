#include "binary_trees.h"

/**
 * binary_tree_count_l - function that counts
 * @tree: a parameter
 * @count: a parameter
 * Return: returns count
 */

size_t binary_tree_count_l(const binary_tree_t *tree, size_t count)
{
	if (tree == NULL)
		return (count);
	count = binary_tree_count_l(tree->left, count);
	if (tree->left == NULL && tree->right == NULL)
		count++;
	count = binary_tree_count_l(tree->right, count);
	return (count);
}

/**
 * binary_tree_leaves - a function that counts leaves
 * @tree: parameter that represents tree
 * Return: returns count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (binary_tree_count_l(tree, 0));
}
