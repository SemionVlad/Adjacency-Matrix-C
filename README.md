# Binary Tree Path Finder
<!-- Tech & meta badges (static; no CI required) -->
![Language: C](https://img.shields.io/badge/Language-C-blue?logo=c)
![Standard: ISO C90](https://img.shields.io/badge/Standard-ISO%20C90-4c1)
![Build: make](https://img.shields.io/badge/Build-make-007acc?logo=gnu)
![Compiler: gcc](https://img.shields.io/badge/Compiler-gcc-a42e2b?logo=gnu)
![Data Structure: Binary Tree](https://img.shields.io/badge/Data%20Structure-Binary%20Tree-795548)
![Representation: Adjacency Matrix](https://img.shields.io/badge/Representation-Adjacency%20Matrix-6aa84f)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

> C90 implementation of a binary tree over an N x N adjacency matrix with a path(u,v) ancestor check; array-based I/O, bounds validation, and make/gcc build.

## Author
- **Name**: Shimon Esterkin  
- **ID**: *****2258  
- **Course**: System Programming Laboratory (20465)  
- **Semester**: 2025A

## Overview
This project implements a sophisticated binary tree representation using an NxN adjacency matrix, developed as part of the Systems Programming Laboratory course (20465) at the Open University of Israel. The implementation provides an efficient way to determine ancestral relationships between nodes in a binary tree structure.

## 🌟 Key Features
- **Adjacency Matrix Implementation**: Represents a binary tree using an N×N matrix where A[u][v] indicates node connections
- **Path Detection Algorithm**: Custom \`path(A, u, v)\` function determines ancestral relationships between nodes
- **Robust Error Handling**: Comprehensive handling of edge cases including out-of-bounds indices
- **Interactive Interface**: User-friendly input system for matrix construction

## 🛠️ Technical Details
The project consists of three main components:
1. \`adjacency.h\`: Header file containing type definitions and function declarations
2. \`adjacency.c\`: Implementation of the core algorithm and matrix operations
3. \`makefile\`: Build configuration for easy compilation

### Core Functionality
- Matrix cell values:
  - \`1\`: Indicates a direct connection between nodes
  - \`0\`: Indicates no connection
- The \`path()\` function determines if node 'u' is an ancestor of node 'v'

### Implementation Features
- Custom \`adjmat\` type definition for the NxN integer matrix
- Enumerated constant \`N\` for matrix dimensions
- Boolean constants for clear return values
- Comprehensive boundary checking and error handling

## 🚀 Getting Started

### Prerequisites
- GCC compiler
- Make utility

### Compilation
\`\`\`bash
make
\`\`\`

### Running the Program
\`\`\`bash
./adjacency
\`\`\`

## 💡 Usage Example
The program will:
- Request matrix elements (0 or 1) from the user
- Display the constructed adjacency matrix
- Process path queries between nodes

## 📝 Academic Details
- **Course**: Systems Programming Laboratory (20465)
- **Institution**: The Open University of Israel
- **Developer**: Shimon Esterkin

## ⚠️ Note
This implementation assumes:
- Matrix indices range from 0 to N-1
- Input values are strictly binary (0 or 1)
- The matrix represents a valid binary tree structure

---

Created by [SemionVlad](https://github.com/SemionVlad) for academic and portfolio purposes. This repository is intended for **non-commercial**, **educational** sharing only.
