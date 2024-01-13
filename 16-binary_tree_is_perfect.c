#include "binary_trees.h"
/**
 * help_perfect - help to check if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: Height of the binary tree or 0
 */
int help_perfect(const binary_tree_t *tree)
{
	int left_ht = 0;
	int right_ht = 0;

	if (tree->left && tree->right)
	{
		left_ht = 1 + help_perfect(tree->left);
		right_ht = 1 + help_perfect(tree->right);
		if (right_ht == left_ht && right_ht != 0 && left_ht != 0)
			return (right_ht);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int answer = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		answer = help_perfect(tree);
		if (answer != 0)
		{
			return (1);
		}
		return (0);
	}
}
