#include "binary_trees.h"

/**
     * binary_tree_node - a function that creates a new node
     * @parent: a parameter that represents the parent node of the current node
     * @value: a parameter that represents the value of the node
     * Return: return a pointer to the newly created node
     **/
     
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

    binary_tree_t* new_node = (binary_tree_t*)malloc (sizeof(binary_tree_t));
    if (new_node != NULL)
    {
        new_node->parent = parent;
        new_node->n = value;
        new_node->left = NULL;
        new_node->right = NULL;
        return new_node;
    }
    else
    {
        return NULL;
    }
}
