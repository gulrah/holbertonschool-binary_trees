#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 * Return: If the node is a leaf, return 1. Otherwise, 0.
 *         If node is NULL, return 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}
