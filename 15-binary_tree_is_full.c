#include "binary_trees.h"

int is_full(const binary_tree_t *tree){
if (tree == NULL)
  return 1;
if ((tree->left == NULL && tree->right == NULL) || (tree->left != NULL && tree->right != NULL))
      return is_full(tree->left) && is_full(tree->right);

    return (0);
}
int binary_tree_is_full(const binary_tree_t *tree)
{
  if (tree == NULL)
    return 0;
else
    return is_full(tree);
}
