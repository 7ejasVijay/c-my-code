#include <stdio.h>
#include <stdlib.h>

#define N 200


int main(void) {
  int *arr;

  // Allocate 200 bytes of int on the heap
  arr = malloc(sizeof(int) * N);
  if (arr == NULL) {
    printf("Malloc failed for arr");
    exit(1);
  }

  for (int i = 0; i < N; i++) {
    arr[i] = i * 2;
  }

  printf("%d\n", arr[3]);
  
  free(arr);
  arr = NULL;

  printf("The program has ended\n");
}
