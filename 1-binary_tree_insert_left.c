#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node on the left of a given node
 * @parent: the parent node in which the new node is being added to 
 * @value: the value of the new node being inserted
 * Return: It returns the new node that has been created
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if(parent == NULL)
    {
        return (NULL);
    }
    else
    {
        binary_tree_t *new_node = binary_tree_node(parent, value);
        if(parent->left == NULL)
        {
            parent->left = new_node;
            return (new_node);
        }
        else
        {
            binary_tree_t *temp = (binary_tree_t*)malloc(sizeof(binary_tree_t));
            if (temp == NULL)
            {
                return NULL;
            }
            temp->parent = NULL;
            temp->right = NULL;
            temp->left = NULL;
            temp->n = parent->left->n;
            parent->left = binary_tree_node(parent, value);
            if (parent->left == NULL) {
                free(temp);
                return NULL;
            }
            /** temp->parent = parent; **/
            parent->left->parent = parent;
            binary_tree_insert_left(parent->left,temp->n);
            free(temp);
            free(temp->left);
            free(temp->right);
            return (parent);
        }
    }
}
