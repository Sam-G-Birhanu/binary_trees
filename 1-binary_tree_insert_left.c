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
            binary_tree_t *temp = parent->left;
            
            if(new_node == NULL){
                parent->left->left = temp;
            }
            parent->left = new_node;
            parent->left->n = new_node->n;
            return (parent);
        }
    }
}