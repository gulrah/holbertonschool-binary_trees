#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left_size, right_size;

    /* Check if the tree is empty (NULL) */
    if (tree == NULL)
        return 0;

    /* If the current node is a leaf node (no children), return 1 */
    if (tree->left == NULL && tree->right == NULL)
        return 1;

    /* Recursively compute the size of the left and right subtrees */
    left_size = binary_tree_size(tree->left);
    right_size = binary_tree_size(tree->right);

    /* Return the total size, which is the sum of the sizes of left and right subtrees, plus 1 for the current node */
    return left_size + right_size + 1;
}
