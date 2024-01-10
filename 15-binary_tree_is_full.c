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
    /* Base Case: If the tree is empty (NULL), it's full by definition */
    if (tree == NULL)
        return 1;

    /* If the current node has no children, it's a leaf node and the tree is full */
    if (tree->left == NULL && tree->right == NULL)
        return 1;

    /* If the current node has both left and right children, continue checking recursively */
    if (tree->left && tree->right)
        return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);

    /* If the current node has only one child (either left or right), the tree is not full */
    return 0;
}
