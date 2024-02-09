#include "binary_trees.h"

size_t count_right(const binary_tree_t *tree, int count)
{
    if (tree == NULL)
        return count;
  if (tree->right != NULL) {
        count++;
        count = count_right(tree->right, count);
    }
return count;
}

size_t count_left(const binary_tree_t *tree, int count)
{
    if (tree == NULL)
        return count;
    if (tree->left != NULL) {
        count++;
        count = count_left(tree->left, count);
    }

    return (count);
}

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
