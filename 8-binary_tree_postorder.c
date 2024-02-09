#include "binary_trees.h"

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_postorder(tree->left);
	func(tree->n);
	binary_tree_postorder(tree->right);
	func(tree->n);
}
