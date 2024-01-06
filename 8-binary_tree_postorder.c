#include "binary_trees.h"

/**
 * binary_tree_postorder - prints a tree in post order
 * @tree: targeted tree
 * @func: pointer function that prints a number
 *
 * Return: void, doesnt return
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
		{
			binary_tree_postorder(tree->left, func);
		}
		if (tree->right != NULL)
		{
			binary_tree_postorder(tree->right, func);
		}
		func(tree->n);
	}
}
