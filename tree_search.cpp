#include <iostream>
#include <vector>
#include <string>
#include "treeStruct.h"

using namespace std;

int treeSearch(Tree *tree, int search, vector<string> &counter) {
    //@g++-ignore segfault

    if (tree == nullptr) {
        counter = {"nothing"};

        return -1;
        // throw runtime_error("Tree is empty");
    }

    // if (tree != NULL) {
    if (tree->root == search) {
        // cout << tree->root << endl;

        return tree->root;
    } else if (tree->root > search) {
        counter.push_back("left");
        return treeSearch(tree->left, search, counter);
    } else if (tree->root < search) {
        counter.emplace_back("right");

        return treeSearch(tree->right, search, counter);
    } else {
        counter = {"nothing"};
        return -1;
    }
    // } else {
    //     cerr << "Tree is empty" << endl;
    // }
}