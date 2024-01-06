#include "binary_trees.h"

/**
 * binary_tree_depth - checks the deapth of a tree
 * @tree: tree to check the deapth
 *
 * Return: the deapth of the tree, 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree != NULL)
	{
		if (tree->parent != NULL)
		{
			total++;
			total += binary_tree_depth(tree->parent);
		}
	}
	return (total);
}
