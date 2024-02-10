#include "binary_trees.h"
/**
 * count_right - counts nodes on the left
 * @tree: the tree to be traveresed
 * @count: counts the number of nodes
 * Return: returns count
 **/

size_t count_right(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t right_height = 0;
    while (tree->right != NULL)
    {
        right_height++;
        tree = tree->right;
    }
    return right_height;
}
/**
 * count_left - counts nodes on the left
 * @tree: the tree to be traveresed
 * @count: counts the number of nodes
 * Return: returns count
 **/
size_t count_left(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t left_height = 0;
    while (tree->left != NULL)
    {
        left_height++;
        tree = tree->left;
    }
    return left_height;
}
/**
 * binary_tree_height- gets the height of tree
 * @tree: root node of the tree to measure the height.
 * Return: returns height
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t left_h = count_left(temp, 0);
	size_t right_h = count_right(temp, 0);

	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
}
