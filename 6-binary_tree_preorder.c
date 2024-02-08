#include "binary_trees.h"
/** binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (node->parent == NULL)
    {
        func(node->n);
    }
    if (node->left !=NULL)
    {
        func( node->left->n);
        binary_tree_preorder(node->left);
    }
    if (node->right != NULL)
    {
        func(node->right->n);
        binary_tree_preorder(node->right);
    }
    return;
}
