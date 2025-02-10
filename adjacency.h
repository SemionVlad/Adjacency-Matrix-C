/*
 * adjacency.h - Header file for binary tree path finding program
 */

#ifndef ADJACENCY_H
#define ADJACENCY_H

/* Define N - Change this value as needed */
enum {N = 4}; /* Can be changed to any value system memory allows */

/* Define boolean constants */
#define TRUE 1
#define FALSE 0

typedef int adjmat[N][N];

/* Function prototypes */
void printMatrix(adjmat matrix);
int path(adjmat matrix, int u, int v);
int dfs(adjmat matrix, int u, int v, int* visited);

#endif /* ADJACENCY_H */