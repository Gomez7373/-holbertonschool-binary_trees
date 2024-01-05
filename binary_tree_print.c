#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_print - Prints a binary tree with a specific format
 * @tree: A pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_print_recursive(tree, 0, 0);
}

/**
 * binary_tree_print_recursive - Recursively prints a binary tree
 * @tree: A pointer to the current node
 * @depth: The depth of the current node in the tree
 * @is_left: 1 if the current node is the left child, 0 otherwise
 */
void binary_tree_print_recursive(const binary_tree_t *tree, size_t depth, int is_left)
{
    if (tree == NULL)
        return;

    binary_tree_print_recursive(tree->right, depth + 1, 0);

    if (depth == 0)
        printf(".-------");
    else
    {
        printf("%*s", (int)(depth * 8 - 1), "");
        if (is_left)
            printf(".--");
        else
            printf("`--");
    }

    printf("(%03d)\n", tree->n);

    binary_tree_print_recursive(tree->left, depth + 1, 1);
}

