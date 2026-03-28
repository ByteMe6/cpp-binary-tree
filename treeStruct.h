#include <string>
#include <vector>

using namespace std;

struct Tree {
    int root;
    Tree *left;
    Tree *right;
};

Tree* add_new_node(Tree *tree, int new_item);
void print_tree2(Tree *node_tree, int level = 0);
void print_tree(Tree *node_tree);
int treeSearch(Tree *tree, int search, vector<string> &counter);