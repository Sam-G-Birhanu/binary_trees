#include "binary_trees.h"

size_t count_nl(const binary_tree_t *tree,size_t count)
{
	if (tree == NULL)
		return count;
	count = count_nl(tree->left, count);
	if (tree->left != NULL || tree->right != NULL)
    	count++;
	count = count_nl(tree->right, count);
	return count;
}
size_t binary_tree_nodes(const binary_tree_t *tree)
{
return count_nl(tree, 0);
}
