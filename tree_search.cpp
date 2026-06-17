#include "treeStruct.h"

int treeSearch(Tree *tree, int search, std::vector<std::string> &path) {
    if (tree == nullptr) {
        path = {"nothing"};
        return -1;
    }

    if (tree->root == search) {
        return tree->root;
    } else if (search < tree->root) {
        path.push_back("left");
        return treeSearch(tree->left, search, path);
    } else {
        path.push_back("right");
        return treeSearch(tree->right, search, path);
    }
}
