#include "binary_trees.h"
/**
 * get_depth - calculates the depth of the tree
 * @tree: pointer to the node to measure the depth
 * @count: count of the nodes
 * Return: returns count
 **/

size_t get_depth(const binary_tree_t *tree, size_t count)
{
	if (tree == NULL)
		return (count);
	if (tree->parent != NULL)
	{
		count++;
		count = get_depth(tree->parent, count);
	}
	return (count);
}
/**
 * binary_tree_depth - gets the depth of the tree
 * @tree: pointer to the node to measure the dept
 * Return: returns result of get_depth
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (get_depth(tree, 0));
}
