# cpp-binary-tree

A binary search tree implementation in C++.

[Русский](./README.ru.md)

## Structure

```
treeStruct.h      — Tree struct and function declarations
addNewNode.cpp    — recursive insert
tree_search.cpp   — recursive search, returns path taken
print_tree.cpp    — pre-order print
print_tree2.cpp   — sideways tree print
main.cpp          — demo: insert 10 random values, search for 5
```

## How it works

- Insert: values smaller than the current node go left, larger go right
- Search: traverses the tree and records each step (`"left"` / `"right"`)
- Returns `-1` and `{"nothing"}` if the value is not found

## Build

```bash
cmake -B build
cmake --build build
./build/binaryTree
```

Requires C++26 and CMake ≥ 4.3.
