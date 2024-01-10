#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least one child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t left_nodes, right_nodes;

    /* Base Case: If the tree is empty (NULL), return 0 */
    if (tree == NULL)
        return 0;

    /* Recursive Case: Compute the number of nodes in the left and right subtrees */
    left_nodes = binary_tree_nodes(tree->left);
    right_nodes = binary_tree_nodes(tree->right);

    /* If the current node has at least one child, add 1 to the total count */
    if (tree->left != NULL || tree->right != NULL)
        return left_nodes + right_nodes + 1;
    else
        return left_nodes + right_nodes;
}
