#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
  int b_f = int(binary_tree_height(tree->left) - binary_tree_height(tree-right));
}
