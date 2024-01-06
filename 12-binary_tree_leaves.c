#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a tree
 * @tree: tree to check
 *
 * Return: return the amount of leaves, 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t amount = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			amount += binary_tree_leaves(tree->left);
		}
		if (tree->right != NULL)
		{
			amount += binary_tree_leaves(tree->right);
		}
		if (tree->left == NULL && tree->right == NULL)
			amount++;
	}
	return (amount);
}
