#include "tree.h"
#include <iostream>

Tree* addNode(Tree *tree, int item) {
    if (tree == nullptr) {
        return new Tree{item, nullptr, nullptr};
    }
    if (item < tree->value)
        tree->left = addNode(tree->left, item);
    else if (item > tree->value)
        tree->right = addNode(tree->right, item);
    return tree;
}

void printTree(Tree *tree) {
    if (tree == nullptr) return;
    std::cout << "Node: " << tree->value << "
";
    if (tree->left)  { std::cout << "  Left of "  << tree->value << ": "; printTree(tree->left);  }
    if (tree->right) { std::cout << "  Right of " << tree->value << ": "; printTree(tree->right); }
}

void printTreeSideways(Tree *tree, int level) {
    if (tree == nullptr) return;
    printTreeSideways(tree->right, level + 1);
    for (int i = 0; i < level; ++i) std::cout << "   ";
    std::cout << tree->value << "
";
    printTreeSideways(tree->left, level + 1);
}

int searchTree(Tree *tree, int target, std::vector<std::string> &path) {
    if (tree == nullptr) {
        path = {"nothing"};
        return -1;
    }
    if (tree->value == target) return tree->value;
    if (target < tree->value) {
        path.push_back("left");
        return searchTree(tree->left, target, path);
    }
    path.push_back("right");
    return searchTree(tree->right, target, path);
}
