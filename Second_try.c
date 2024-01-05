#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/* Define the binary tree node structure */
typedef struct binary_tree_node {
    int value;
    struct binary_tree_node *left;
    struct binary_tree_node *right;
} binary_tree_t;

/* Function to create a new binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

int main() {
    binary_tree_t *root = NULL;
    binary_tree_t *leftChild = NULL;
    binary_tree_t *rightChild = NULL;
    binary_tree_t *leftLeftChild = NULL;
    binary_tree_t *leftRightChild = NULL;
    binary_tree_t *rightLeftChild = NULL;
    binary_tree_t *rightRightChild = NULL;

    root = binary_tree_node(NULL, 98);
    leftChild = binary_tree_node(root, 12);
    rightChild = binary_tree_node(root, 402);

    leftLeftChild = binary_tree_node(leftChild, 6);
    leftRightChild = binary_tree_node(leftChild, 16);

    rightLeftChild = binary_tree_node(rightChild, 256);
    rightRightChild = binary_tree_node(rightChild, 512);

    /* Print the binary tree structure */
    printf("Binary Tree Structure:\n");
    printf("       .-------(%d)-------.\n", root->value);
    printf("  .--(%d)--.         .--(%d)--.\n", leftChild->value, rightChild->value);
    printf("(%d)     (%d)     (%d)     (%d)\n", leftLeftChild->value, leftRightChild->value,
                                                rightLeftChild->value, rightRightChild->value);

    /* Perform operations on the binary tree as needed */

    /* Don't forget to free the allocated memory when done */
    /* free(root); /*Freeing the entire tree in a real scenario */
    return 0;
}

/* Function to create a new binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    if (new_node != NULL) {
        new_node->value = value;
        new_node->left = NULL;
        new_node->right = NULL;

        /* Link the new node to its parent */
        if (parent != NULL) {
            if (value <= parent->value) {
                parent->left = new_node;
            } else {
                parent->right = new_node;
            }
        }
    }

    return new_node;
}
