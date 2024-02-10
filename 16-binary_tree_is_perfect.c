#include "binary_trees.h"
#include <math.h>
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = measure_height(tree->left);
	right_height = measure_height(tree->right);

	balance = left_height - right_height;

	return (balance);
}

/**
 * measure_height - measures height of a binary tree recursively
 * @tree: pointer to the root of the tree to measure
 * Return: height
 */
size_t measure_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = measure_height(tree->left);
	right_height = measure_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_count - function that counts nodes
 * @tree: tree to be traversed
 * @count: stores counted nodes
 * Return: returns node count
 **/

size_t binary_tree_count(const binary_tree_t *tree, size_t count)
{
	if (tree == NULL)
		return (count);
	count = binary_tree_count(tree->left, count);
	count++;
	count = binary_tree_count(tree->right, count);
	return (count);
}
/**
 * my_pow - returns the value of x raised to the power of y
 * @x: initial value
 * @y: exponent
 * Return: value of x raised to power of y or -1 if y is lower than 0
 */

int my_pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * my_pow(x, y - 1));
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = (int)measure_height(tree);
	int h2 = (int)binary_tree_count(tree, 0);
if (tree == NULL)
  return (0);

if (binary_tree_balance(tree) == 0 && h2 == ((int)my_pow(2, h + 1) - 1))
  return (1);
return 0;
}
