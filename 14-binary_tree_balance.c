/* adding size */
#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: targeted tree
*
* Return: the balance factor, 0 otherwise
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
size_t left_s = 0;
size_t right_s = 0;

if (tree == NULL)
{
return (0);
}
else
{
if (tree)
{
left_s = tree->left ? 1 + binary_tree_height_balance(tree->left) : 1;
right_s = tree->right ? 1 + binary_tree_height_balance(tree->right) : 1;
}

return (left_s > right_s ? left_s - right_s : right_s - left_s);
}
}

/**
* binary_tree_height_balance - get the height of a sub tree
* @tree: subtree to check
*
* Return: height of subtree, 0 otherwise
*/
size_t binary_tree_height_balance(const binary_tree_t *tree)
{
int right = 0;
int left = 0;
int total = 0;

if (tree)
{
left = binary_tree_height_balance(tree->left);
right = binary_tree_height_balance(tree->right);
total = left - right;
}
return (total);
}

