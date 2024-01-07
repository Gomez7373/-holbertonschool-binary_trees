#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: To find uncle
 *
 * Return: a pointer to the uncle, NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *curr = node;
	int temp = 0;

	if (node != NULL)
	{
		if (node->parent != NULL)
			curr = node->parent;
		else
			return (NULL);
		if (curr->parent != NULL)/*at granfather node*/
		{
			temp = curr->n;
			curr = curr->parent;
			if (curr->left == NULL || curr->right == NULL)
				return (NULL);
			if (curr->left->n != temp)
			{
				curr = curr->left;
				return (curr);
			}
			else
			{
				curr = curr->right;
				return (curr);
			}
		}
	}
	return  (NULL);
}
