#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, level_nodes;
    int is_perfect;

    if (tree == NULL)
        return (0);

    height = binary_tree_height(tree);

    is_perfect = 1;
    for (level_nodes = 1; level_nodes < height; level_nodes++)
    {
        if (binary_tree_level_check(tree, level_nodes) == 0)
        {
            is_perfect = 0;
            break;
        }
    }

    return (is_perfect);
}

/**
 * binary_tree_level_check - Checks if a binary tree level is filled from left to right
 * @tree: Pointer to the root node of the tree
 * @level: Level to check
 *
 * Return: 1 if the level is filled from left to right, 0 otherwise.
 */
int binary_tree_level_check(const binary_tree_t *tree, size_t level)
{
    if (tree == NULL)
        return (0);

    if (level == 1)
        return (1);

    return (binary_tree_level_check(tree->left, level - 1) &&
            binary_tree_level_check(tree->right, level - 1));
}
