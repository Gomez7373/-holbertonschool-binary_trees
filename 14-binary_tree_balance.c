#include "binary_trees.h"

/**
* binary_tree_height_balance - Measure the height of
* the binary tree for a balanced tree
* @tree: tree that goes through
* Return: the height
*/

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
size_t left = 0;
size_t right = 0;

if (tree == NULL)
{
return (0);
}
else
{
if (tree)
{
left = tree->left ? 1 + binary_tree_height_balance(tree->left) : 1;
right = tree->right ? 1 + binary_tree_height_balance(tree->right) : 1;
}
return ((left > right) ? left : right);
}
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: tree to go through
* Return: balanced factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
int left = 0, right = 0, total = 0;

if (tree)
{
left = ((int)binary_tree_height_balance(tree->left));
right = ((int)binary_tree_height_balance(tree->right));
total = left - right;
}
return (total);
}

