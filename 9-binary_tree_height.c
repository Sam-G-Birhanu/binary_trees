#include "binary_trees.h"

size_t count_right(binary_tree_t *tree, int count)
{
    if (tree == NULL)
        return count;
  if (tree->right != NULL) {
        count++;
        count = count_right(tree->right, count);
    }
return count;
}

size_t count_left(binary_tree_t *tree, int count)
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
  size_t left_h = count_left(tree);
  size_t right_h = count_right(tree);
  if (left > right)
    return (left);
  else
    return (right)
}
