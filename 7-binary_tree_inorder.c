#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree in-order traversal
 * @tree: tree to go through
 * @func: function pointer to function that prints numbers
 *
 * Return: void, doesn't return
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
		{
			binary_tree_inorder(tree->left, func);
		}
		func(tree->n);
		if (tree->right != NULL)
		{
			binary_tree_inorder(tree->right, func);
		}
	}
}
