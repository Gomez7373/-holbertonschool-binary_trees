#include "binary_trees.h"
/**
* binary_tree_delete - frees the entire tree using the recursion
* and frees the node when the node at the left and at the right are NULL
* @tree: a tree to free
* Return: it doesnt return.
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return;
}
else
{
if (tree != NULL)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
}
free(tree);
}

}
