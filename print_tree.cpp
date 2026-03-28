#include "treeStruct.h"
#include <iostream>
using namespace std;

void print_tree(Tree *node_tree) {
    if (node_tree == nullptr)
        return;

    cout << "Node: " << node_tree->root << endl;

    if (node_tree->left) {
        cout << "  Left of " << node_tree->root << ": ";
        print_tree(node_tree->left);
    }

    if (node_tree->right) {
        cout << "  Right of " << node_tree->root << ": ";
        print_tree(node_tree->right);
    }
}
