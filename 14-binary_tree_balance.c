#include "binary_trees.h"
/**
 * count_right - counts nodes on the left
 * @tree: the tree to be traveresed
 * @count: counts the number of nodes
 * Return: returns count
 **/

size_t count_right(const binary_tree_t *tree, int count)
{
	if (tree == NULL)
		return (count);
	if (tree->right != NULL)
	{
		count++;
		count = count_right(tree->right, count);
	}
	return (count);
}
/**
 * count_left - counts nodes on the left
 * @tree: the tree to be traveresed
 * @count: counts the number of nodes
 * Return: returns count
 **/
size_t count_left(const binary_tree_t *tree, int count)
{
	if (tree == NULL)
		return (count);
	if (tree->left != NULL)
	{
		count++;
		count = count_left(tree->left, count);
	}
	return (count);
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
int binary_tree_balance(const binary_tree_t *tree)
{
  int b_f;
  int l;
  int r;
  if (tree == NULL)
  {
    return 0;
  }
  l = (int)binary_tree_height(tree->left);
  r = (int)binary_tree_height(tree->right);
  b_f = l - r;
  return b_f;
}
