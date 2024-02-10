#include "binary_trees.h"

size_t binary_tree_count(const binary_tree_t *tree,size_t count)
{
	if (tree == NULL)
		return count;
	count = binary_tree_count(tree->left, count);
	count++;
	count = binary_tree_count(tree->right, count);
	return count;
}
size_t binary_tree_size(const binary_tree_t *tree)
{
return binary_tree_count(tree, 0);
}
