/* 
 * Maman12.
 * Course: Systems programming laboratory (20465)
 * Student: Shimon Esterkin
 * ID: 207972258
 * 
 * Preview: This code implements a binary tree of size N using an N x N adjacency matrix. 
 * Each matrix cell (A[u][v]) represents the connection between nodes u and v: 1 indicates a connection, 0 indicates no connection.  
 * The algorithm uses a custom function, path(A, u, v), which takes the adjacency matrix A and node indices u and v as input.  
 * path() returns true if a path exists between nodes u and v (where one node is an ancestor of the other), and false otherwise. 
 * The main algorithm leverages path() to determine connectivity between arbitrary node pairs in the tree.
 * 
 * The following program must be written according to the requirements below -
 * 
 * 1) Definitions and Constants:
 * 
 *    (*) Defined 'N' by enum.
 *    (*) Defined TRUE and FALSE constans.
 * 
 * 2) Created typedef for adjmat as a NxN integer matrix.
 * 
 * 3) The function "path(A, u, v)" determines if node 'u' is an ancestor of node 'v', the function will return TRUE. Otherwise, 
 *    it will return FALSE.
 *    The function handle these specific cases:
 *    
 *    (*) Out-of-bonds indices: if 'u' or 'v' is outside the valid range 
 *        of the matrix (0 to N-1, assuming N is the size of the matrix and globally accessible), it returns FALSE.
 *    (*) Identical indices: If 'u' and 'v' are identical and within bounds, it returns TRUE;
 * 
 * The function implicitly assumes the existence of a globally accessible constant 'N' representing the size of the adjacency matrix.
 * 
 * 4) The main program executes as follows:
 *     
 *    (*) The program will define a variable from the type adjmat (i.e an instance of a adjacency matrix).
 *    (*) The program will ask the user for a list of values ​​for the elements of the matrix (the elements 0 or 1). 
 *        After receiving all the matrix data and placing it in a variable, the program will print the matrix in 
 *        a nice two-dimensional display.
 */

#include <stdio.h>
#include <stdlib.h>
#include "adjacency.h"

/* Function 1: Function to print the adjacency matrix in a formatted way */
void printMatrix(adjmat matrix) {
   int i, j;
   
   printf("\nAdjacency Matrix %dx%d:\n", N, N);
   printf("    ");
   for (j = 0; j < N; j++) {
       if (j % 10 == 0 && j > 0) printf("\n    ");
       printf("%3d ", j);
   }
   printf("\n\n");
   
   for (i = 0; i < N; i++) {
       printf("%3d: ", i);
       for (j = 0; j < N; j++) {
           if (j % 10 == 0 && j > 0) printf("\n     ");
           printf("%3d ", matrix[i][j]);
       }
       printf("\n");
   }
}

/* Function 2: Helper function for DFS traversal */
int dfs(adjmat matrix, int u, int v, int* visited) {

    int i;
    /* If current node is target, path found */
    if (u == v) return TRUE;
   
   visited[u] = TRUE;
   
   for (i = 0; i < N; i++) {
       if (matrix[u][i] == TRUE && !visited[i]) {
           if (dfs(matrix, i, v, visited)) return TRUE;
       }
   }
   return FALSE;
}

/* Function 3: Function to check if there's a path from node u to node v */
int path(adjmat matrix, int u, int v) {
   if (u >= N || v >= N || u < 0 || v < 0) return FALSE;
   if (matrix[u][v] == TRUE) return TRUE;
   
   int* visited = (int*)calloc(N, sizeof(int));
   if (!visited) {
       printf("Memory allocation failed!\n");
       return FALSE;
   }
   
   int result = dfs(matrix, u, v, visited);
   free(visited);
   return result;
}


int main() {
   adjmat* matrix;         /* Adjacency matrix */
   int u, v;               /* Node indices for testing */
   int i, j;               /* Loop counters */
   int testCount = 0;      /* Number of paths tested */
   int read_status;        /* Input operation status */
   
  matrix = (adjmat*)malloc(sizeof(adjmat));
   if (!matrix) {
       printf("Error: Could not allocate memory\n");
       return 1;
   }
   
   printf("=== Reading Matrix ===\n");
   printf("Matrix size: %dx%d\n", N, N);
   printf("Enter the adjacency matrix values (0 or 1):\n");
   
   for (i = 0; i < N; i++) {
       for (j = 0; j < N; j++) {
           printf("Enter value for position [%d][%d]: ", i, j);
           if (scanf("%d", &(*matrix)[i][j]) != 1) {
               printf("Error reading matrix value\n");
               free(matrix);
               return 1;
           }
           if ((*matrix)[i][j] != 0 && (*matrix)[i][j] != 1) {
               printf("Error: Values must be 0 or 1\n");
               free(matrix);
               return 1;
           }
       }
   }
   
   printMatrix(*matrix);
   
   printf("\n=== Processing Path Tests ===\n");
   printf("Enter pairs of nodes to test paths (-1 -1 to end):\n");
   
   while (1) {
       printf("\nEnter two nodes (u v): ");
       read_status = scanf("%d %d", &u, &v);
       
       if (read_status == EOF || (u == -1 && v == -1)) break;
       
       if (read_status != 2) {
           printf("Error: Invalid input\n");
           break;
       }
       
       testCount++;
       int result = path(*matrix, u, v);
    printf("Path from node %d to node %d: %s\n", u, v, result ? "EXISTS" : "DOES NOT EXIST");
    
   }
   
   printf("\n=== Test Summary ===\n");
    printf("Total paths tested: %d\n", testCount);
    
    free(matrix);
    return 0;
}