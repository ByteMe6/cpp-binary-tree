#include <iostream>
#include <vector>
#include <string>
#include "treeStruct.h"

int main() {
    Tree *tree = new Tree();
    tree->root = 0;
    tree->left = nullptr;
    tree->right = nullptr;

    for (int i = 0; i < 10; ++i)
        add_new_node(tree, random() % 10);

    add_new_node(tree, 4);

    print_tree(tree);

    std::vector<std::string> path;
    int result = treeSearch(tree, 5, path);

    std::cout << result;
    for (const auto &step : path)
        std::cout << "
" << step;

    delete tree;
    return 0;
}
