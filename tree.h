#pragma once
#include <string>
#include <vector>

struct Tree {
    int value;
    Tree *left;
    Tree *right;
};

Tree* addNode(Tree *tree, int item);
void  printTree(Tree *tree);
void  printTreeSideways(Tree *tree, int level = 0);
int   searchTree(Tree *tree, int target, std::vector<std::string> &path);
