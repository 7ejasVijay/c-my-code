#include <stdio.h>
#include <stdlib.h>

#define COLS (100)
#define N 3
#define M 4

void init_matrix(int m[][COLS], int rows) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
      m[i][j] = i * j;
    }
  }
}

void init2D(int *arr, int rows, int cols) {
  int i, j;

  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      arr[i*cols + j] = 0;
    }
  }
}

int main(void) {

  int martrix[50][COLS];
  int bigger[100][COLS];

  init_matrix(martrix, 50);
  init_matrix(bigger, 100);

  // Dynamically allocated arrays

  // Method 1 - Memory efficient allocation
  // ----------------------------------------
  char *two_d_array;
  two_d_array = malloc(sizeof(char) * (3 * 4));

  if (two_d_array == NULL) {
    exit(1);
  }

  // The compiler doesn't know the difference between 1D and 2D array, so (i*M + j)
  for (int i = 0; i < N * M; i++) {
      two_d_array[i] = 0;
      printf("pointer address %p\n", &two_d_array[i]);
    // for (int j = 0; j < M; j++) {
    // }
  }

  free(two_d_array);
  two_d_array = NULL;
  // ----------------------------------------
  
  int *array;
  array = malloc(sizeof(int) * N * M);
  if (array == NULL) {
    init2D(array, N, M);
  }

  free(array);
  array = NULL;
}

