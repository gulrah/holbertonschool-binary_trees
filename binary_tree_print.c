#include "binary_trees.h"
#include <stdio.h>

/**
 * print_tree - Recursive function to print a binary tree
 * @tree: Pointer to the root node of the tree to print
 * @space: Space for formatting
 * @height: Height of the tree
 */
void print_tree(const binary_tree_t *tree, int space, int height)
{
    if (tree == NULL)
        return;

    space += height;

    print_tree(tree->right, space, height);

    printf("\n");
    for (int i = height; i < space; i++)
        printf(" ");
    printf("%d\n", tree->n);

    print_tree(tree->left, space, height);
}

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    int height = 5;
    print_tree(tree, 0, height);
}
