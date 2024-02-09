#include "binary_trees.h"
/**
 * binary_tree_inorder- goes through a binary tree using in-order traversal
 * @tree: the tree to be traversed
 * @func: a function that prints the tree
 * Return: returns void
 **/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left);
	func(tree);
	binary_tree_inorder(tree->right);
}
