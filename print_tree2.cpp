#include "treeStruct.h"
#include <iostream>
using namespace std;

void print_tree2(Tree *node_tree, int level) {
    if (node_tree == nullptr) return;

    print_tree2(node_tree->right, level + 1);

    for (int i = 0; i < level; ++i) {
        cout << "   ";
    }

    cout << node_tree->root << endl;

    print_tree2(node_tree->left, level + 1);
}
