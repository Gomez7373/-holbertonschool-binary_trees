#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibilings of a node
 * @node: targeted node
 *
 * Return: the sibling of a node, null otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *curr = node;

	if (node != NULL)
	{
		if (node->parent == NULL)
		{
			return (NULL);
		}
		else
		{
			curr = curr->parent;
			if (curr->right == NULL || curr->left == NULL)
				return (NULL);
			if (curr->left->n != node->n)
				curr = curr->left;
			else
				curr = curr->right;
			return (curr);
		}
	}
	return (NULL);
}
