#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
  if (node != NULL && if node->parent != NULL)
{
if (node->parent->left == node)
  return (node->parent->right);
else
  return (node->parent->left);
}
  else
    return (NULL);
}

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node != NULL && if node->parent != NULL)
  return binary_tree_sibling(node->parent);
else
  return (NULL);
}
