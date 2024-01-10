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
    size_t left_height, right_height;

    /* If tree is NULL, height is 0 */
    if (tree == NULL)
        return 0;

    /* Compute the height of the left subtree recursively */
    left_height = binary_tree_height(tree->left);

    /* Compute the height of the right subtree recursively */
    right_height = binary_tree_height(tree->right);

    /* Determine and return the maximum height between left and right subtrees, plus 1 for the current node */
    if (left_height > right_height)
        return left_height + 1;  /* Height of left subtree plus 1 for the current node */
    else
        return right_height + 1; /* Height of right subtree plus 1 for the current node */
}
