#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    /* Base Case: If the tree is empty (NULL), height is 0 */
    if (tree == NULL)
        return 0;

    /* Recursive Case: Compute the height of the left subtree */
    size_t left_height = binary_tree_height(tree->left);

    /* Recursive Case: Compute the height of the right subtree */
    size_t right_height = binary_tree_height(tree->right);

    /* Return the maximum height between left and right subtrees, plus 1 for the current node */
    if (left_height > right_height)
        return (left_height + 1);
    else
        return (right_height + 1);
}