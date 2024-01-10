#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    /* If the tree is empty (NULL), it's full by definition */
    if (tree == NULL)
        return 1;
    else
    {
        /* If the current node is a leaf node (no children), the tree is full */
        if (tree->left == NULL && tree->right == NULL)
            return 1;
        /* If the current node has both left and right children, continue checking recursively */
        else if (tree->left != NULL && tree->right != NULL)
            return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
        /* If the current node has only one child, the tree is not full */
        else
            return 0;
    }
}
