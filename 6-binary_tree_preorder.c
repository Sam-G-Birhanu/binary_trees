#include "binary_trees.h"
/** binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree != NULL && func != NULL)
        {
            if (tree->parent == NULL)
            {
                func(tree->n);
            }
            if (tree->left !=NULL)
            {
                func( tree->left->n);
                binary_tree_preorder(tree->left);
            }
            if (tree->right != NULL)
            {
                func(tree->right->n);
                binary_tree_preorder(tree->right);
            }
            return;
        }
}
