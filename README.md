# Binary Tree Path Finder

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

## 📄 License
This project is part of academic coursework and is subject to university guidelines.

---
*Developed with ❤️ and ☕ by Shimon Esterkin*

