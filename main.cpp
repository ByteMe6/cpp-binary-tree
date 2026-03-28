#include <iostream>
#include <vector>
#include <string>
#include "treeStruct.h"

using namespace std;





int main() {
    Tree *node_tree;
    node_tree = new Tree();
    node_tree->root = 0;
    node_tree->left = nullptr; // smaller than root
    node_tree->right = nullptr; // bigger than root
    // Tree *node = add_new_node(node_tree, 1)

    for (int i = 0; i < 10; ++i) {
        add_new_node(node_tree, random() % 10);
    }

    add_new_node(node_tree, 4);

    // print_tree2(node_tree);
    print_tree(node_tree);

    vector<string> actions = {};

    cout << treeSearch(node_tree, 5, actions);

    for (int i = 0; i < actions.size(); i++) {
        cout << endl << actions[i];
    }

    delete node_tree;
    node_tree = nullptr;


    return 0;
}

