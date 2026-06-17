#include <iostream>
#include <vector>
#include <string>
#include "tree.h"

int main() {
    Tree *tree = new Tree{0, nullptr, nullptr};

    for (int i = 0; i < 10; ++i)
        addNode(tree, random() % 10);

    addNode(tree, 4);
    printTree(tree);

    std::vector<std::string> path;
    int result = searchTree(tree, 5, path);

    std::cout << result;
    for (const auto &step : path)
        std::cout << "
" << step;

    delete tree;
    return 0;
}
