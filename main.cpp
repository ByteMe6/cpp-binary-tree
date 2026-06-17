#include <iostream>
#include <cstdlib>
#include "tree.h"

int main() {
    Tree *tree = new Tree{0, nullptr, nullptr};

    for (int i = 0; i < 10; ++i)
        addNode(tree, rand() % 10);
    addNode(tree, 4);

    printTree(tree);

    std::vector<std::string> path;
    int result = searchTree(tree, 5, path);

    std::cout << result;
    for (const auto &step : path)
        std::cout << "\n" << step;

    delete tree;
    return 0;
}
