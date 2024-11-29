#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *ptr;

  ptr = malloc(sizeof(int));

  if (ptr != NULL) {
    *ptr = 6;
    printf("%d", *ptr);
  }

  free(ptr);
  ptr = NULL;
}
