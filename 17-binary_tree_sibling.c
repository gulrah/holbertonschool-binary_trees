#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree
 * @node: A pointer to the node to find the sibling of
 *
 * Return: A pointer to the sibling node, NULL if no sibling or node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *sibling;

    /* Check if node or its parent is NULL */
    if (!node || !node->parent)
        return (NULL);

    /* Assign the right child of the parent to sibling */
    sibling = node->parent->right;

    /* If the current node is the right child, update sibling to the left child */
    if (node == sibling)
        sibling = node->parent->left;

    return (sibling);
}
