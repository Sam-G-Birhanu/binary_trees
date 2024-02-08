#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node on the right
 * @parent: the parent node in which the new node is being added to
 * @value: the value of the new node being inserted
 * Return: It returns the new node that has been created
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		binary_tree_t *new_node = binary_tree_node(parent, value);

		if (parent->right == NULL)
		{
			parent->right = new_node;
			return (new_node);
		}
		else
		{
			binary_tree_t *temp = binary_tree_node(NULL, parent->right->n);
			binary_tree_t *new_node_2 = binary_tree_node(new_node, temp->n);
			int x = new_node_2->n;

			free(parent->right);
			parent->right = new_node;
			binary_tree_insert_right(new_node, x);
			free(temp);
			free(new_node_2);
			return (new_node);
		}
	}
}
