#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);

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
  r = (int)binary_tree_height(tree->right));
  b_f = l - r;
  return b_f;
}
