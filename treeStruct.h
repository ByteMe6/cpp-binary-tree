#pragma once
#include <string>
#include <vector>

struct Tree {
    int root;
    Tree *left;
    Tree *right;
};

Tree* add_new_node(Tree *tree, int new_item);
void  print_tree(Tree *node_tree);
void  print_tree2(Tree *node_tree, int level = 0);
int   treeSearch(Tree *tree, int search, std::vector<std::string> &path);
