#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree){
int f = 1;
if (tree == NULL)
  return (f);
if ((tree->left == NULL && tree->right == NULL) || (tree->left != NULL && tree->right != NULL))
    f = (1);
  else
     f = 0;
    f = f * binary_tree_is_full(tree->left);
    f = f * binary_tree_is_full(tree->left);
    return (f);
}
