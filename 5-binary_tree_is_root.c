#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if given node is root
 * @node: node to check
 *
 * Return: 1 if node is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}
