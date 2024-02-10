#include "binary_trees.h"
/**
 * max - returns the maximum of two numbers
 * @a: first number
 * @b: second number
 * Return: maximum of a and b
 **/
size_t max(size_t a, size_t b)
{
    return (a > b ? a : b);
}

/**
 * binary_tree_height - computes the height of a binary tree
 * @tree: root node of the binary tree
 * Return: height of the binary tree
 **/
size_t binary_tree_h(const binary_tree_t *tree)
{
    size_t left_height;
    size_t right_height;
    if (tree == NULL)
        return 0;
    left_height = binary_tree_h(tree->left);
    right_height = binary_tree_h(tree->right);

    return max(left_height, right_height) + 1;
}
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t h;
    h = binary_tree_h(tree) -1;
    return (h);
}
