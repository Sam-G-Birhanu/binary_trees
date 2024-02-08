#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return (NULL);

    binary_tree_t *new_node = binary_tree_node(parent, value);

    if (new_node == NULL)
        return (NULL);

    if (parent->left == NULL)
    {
        parent->left = new_node;
        return (new_node);
    }
    else
    {
        binary_tree_t *temp = binary_tree_node(NULL, parent->left->n);
        binary_tree_t *new_node_2 = binary_tree_node(new_node, temp->n);

        if (new_node_2 == NULL)
        {
            free(new_node);
            return (NULL);
        }

        int x = new_node_2->n;
        free(parent->left);
        parent->left = new_node;
        binary_tree_insert_left(new_node, x);
        free(temp);
        free(new_node_2);
        return (new_node);
    }
}

