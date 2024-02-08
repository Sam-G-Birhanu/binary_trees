#include "binary_trees.h"
/**
 * binary_tree_delete - a function that deletes a tree
 * @tree: a pointer to the tree to be deleted
 * Return: void
 **/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree->left != NULL)
		{
			binary_tree_delete(tree->left);
		}
		if (tree->right != NULL)
		{
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
