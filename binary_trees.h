#define
#ifdef

#include <stdio.h>

/*Betty doc*/

/*prototypes of all functions  */

/*0*/binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/*1*/binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/*2*/binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/*3*/void binary_tree_delete(binary_tree_t *tree);
/*4*/int binary_tree_is_leaf(const binary_tree_t *node);
/*5*/int binary_tree_is_root(const binary_tree_t *node);
/*6*/void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/*7*/void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/*8*/void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/*9*/size_t binary_tree_height(const binary_tree_t *tree);
/*10*/size_t binary_tree_depth(const binary_tree_t *tree);
/*11*/size_t binary_tree_size(const binary_tree_t *tree);
/*12*/size_t binary_tree_leaves(const binary_tree_t *tree);
/*13*/size_t binary_tree_nodes(const binary_tree_t *tree);
/*14*/int binary_tree_balance(const binary_tree_t *tree);
/*15*/int binary_tree_is_full(const binary_tree_t *tree);
/*16*/int binary_tree_is_perfect(const binary_tree_t *tree);
/*17*/binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/*18*/binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif
