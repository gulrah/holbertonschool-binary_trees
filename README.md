# Binary Trees Project

## Overview

This project focuses on the implementation and manipulation of binary trees in the C programming language. It includes the creation of basic binary trees, binary search trees, AVL trees, and max binary heaps. The project also covers various operations and characteristics associated with binary trees.

## Table of Contents

1. [Introduction](#introduction)
2. [Binary Trees](#binary-trees)
3. [Binary Search Trees](#binary-search-trees)
4. [AVL Trees](#avl-trees)
5. [Max Binary Heap](#max-binary-heap)
6. [Requirements](#requirements)
7. [Usage](#usage)
8. [Coding Style](#coding-style)
9. [Testing](#testing)
10. [Contributing](#contributing)
11. [Authors](#authors)
## Introduction

A binary tree is a hierarchical data structure consisting of nodes, where each node has at most two children: left and right. The structure of a binary tree provides efficient storage and retrieval of data.

## Binary Trees

In this project, we deal with simple binary trees. They are not Binary Search Trees (BSTs) and do not follow any specific rule.

## Binary Search Trees

A Binary Search Tree is a binary tree with the property that the left subtree of a node contains only nodes with values less than the node's value, and the right subtree only nodes with values greater than the node's value.

## AVL Trees

An AVL Tree (named after its inventors Adelson-Velsky and Landis) is a self-balancing binary search tree. It maintains its balance by performing rotations when necessary after insertions and deletions.

## Max Binary Heap

A Max Binary Heap is a binary tree that satisfies the heap property - the value of each node is less than or equal to the values of its children.

## Requirements

- The code is written in C and compiled using `gcc` on Ubuntu 20.04 LTS.
- Coding style follows the Betty style guide.
- No global variables are used.
- Each file contains no more than 5 functions.
- Prototypes are included in the header file (`binary_trees.h`).
- Header files are include guarded.

## Usage

To use the functions implemented in this project, include the `binary_trees.h` header file in your C program.

```c
#include "binary_trees.h"
```

## Coding Style

The code follows the Betty style guide. Use the provided `betty-style.pl` and `betty-doc.pl` scripts to check for compliance.

## Testing

A `main.c` file is provided as an example to test the functions. You may use your own test cases or modify the existing ones for testing.

## Contributing

Contributions to the project are welcome. If you find any issues or have improvements, feel free to create a pull request.

## Authors

Gulnar Rahimli and Saleh Shahverdiyev


