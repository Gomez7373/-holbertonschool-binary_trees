#include "binary_trees.h"

/**
 * binary_tree_height - checks the height of a tree
 * @tree: tree to get height
 *
 * Return: the height of the tree, 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t total = 0, left = 0, right = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			left++;
			left += binary_tree_height(tree->left);
		}
		if (tree->right != NULL)
		{
			right++;
			right += binary_tree_height(tree->right);
		}
	}
	total += h_val(left, right);

	return (total);
}

/**
 * h_val - checks which number is heigher
 * @num1: first number to check
 * @num2: second number to check
 *
 * Return: the bigger number of the two
 */
size_t h_val(size_t num1, size_t num2)
{
	size_t total = 0;

	if (num1 > num2)
	{
		total = num1;
	}
	else if (num1 < num2)
	{
		total = num2;
	}
	else if (num1 == num2)
	{
		total = num1;
	}
	return (total);
}
