#include "binary_trees.h"
int binary_tree_balance(const binary_tree_t *tree)
{
  if (tree == NULL)
    return 0;
  int b_f;
  b_f = (int)(binary_tree_height(tree->left) - binary_tree_height(tree->right));
  return b_f;
}
