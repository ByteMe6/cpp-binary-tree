#include "treeStruct.h"

Tree *add_new_node(Tree *tree, int new_item) {
    if (tree == nullptr) {
        Tree *new_node = new Tree();
        new_node->root = new_item;
        new_node->left = nullptr;
        new_node->right = nullptr;
        return new_node;
    }

    if (new_item < tree->root) {
        tree->left = add_new_node(tree->left, new_item);
    } else if (new_item > tree->root) {
        tree->right = add_new_node(tree->right, new_item);
    }

    return tree;
}