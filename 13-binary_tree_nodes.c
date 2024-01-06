#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: targeted tree
 *
 * Return: returns amount, 0 otherewise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t amount = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
			amount++;
		if (tree->left != NULL)
		{
			amount += binary_tree_nodes(tree->left);
		}
		if (tree->right != NULL)
		{
			amount += binary_tree_nodes(tree->right);
		}
	}
	return (amount);
}
