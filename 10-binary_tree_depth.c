#include "binary_trees.h"

size_t get_depth(const binary_tree_t *tree, size_t count)
{
    if (tree == NULL)
        return count;
  if (tree->parent != NULL) {
        count++;
        count = get_depth(tree->parent, count);
    }
return count;
}
size_t binary_tree_depth(const binary_tree_t *tree)
{
    return get_depth(tree, 0);
}
