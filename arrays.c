#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p_array;
  double *d_array;

  p_array = malloc(sizeof(int) * 10);
  d_array = malloc(sizeof(double) * 20);

  if ((p_array == NULL) || (d_array == NULL)) {
    printf("Malloc failed\n");
    exit(1);
  }

  // Initializing the arrays, [] is also a form of dereferencing
  for (int i = 0; i < 10; i++) {
    p_array[i] = 0;
    d_array[i] = 0.0;
  }

  printf("%d\n", p_array[3]);

  free(p_array);
  p_array = NULL;

  free(d_array);
  d_array = NULL;
}
