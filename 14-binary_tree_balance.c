#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: targeted tree
 *
 * Return: the balance, 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	int left_size = 0;
	int right_size = 0;

	if (tree != NULL)
	{
		left_size = helper(tree->left);
		right_size = helper(tree->right);
		balance += left_size - right_size;
	}

	return (balance);
}

/**
 * helper - get the height of a sub tree
 * @tree: subtree to check
 *
 * Return: height of subtree, 0 otherwise
 */
int helper(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left = helper(tree->left);
	int right = helper(tree->right);

	return (1 + (left > right ? left : right));
}
