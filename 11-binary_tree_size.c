#include "binary_trees.h"
/**
 * binary_tree_count: function that counts nodes
 * @tree: tree to be traversed
 * @count: stores counted nodes
 * Return: returns node count
 **/

size_t binary_tree_count(const binary_tree_t *tree,size_t count)
{
	if (tree == NULL)
		return (count);
	count = binary_tree_count(tree->left, count);
	count++;
	count = binary_tree_count(tree->right, count);
	return (count);
}
/**
 * binary_tree_size- functions that returns size
 * @tree: tree to be traversed
 * Return: returns size
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	return binary_tree_count(tree, 0);
}
