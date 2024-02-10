#include "binary_trees.h"
int binary_tree_balance(const binary_tree_t *tree)
{
  int b_f;
  if (tree == NULL)
    return 0;
  
  b_f = (int)(binary_tree_height(tree->left) - binary_tree_height(tree->right));
  return b_f;
}
