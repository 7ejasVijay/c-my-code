#include <stdio.h>
#include <stdlib.h>

#define N (50)
#define PI (3.14159)
#define NAME ("John")

int main(void) {

  int array[N];
  int *d_arr, i;
  double area, circ, radius;

  radius = 12.3;
  area = PI*radius*radius;
  circ = 2*PI*radius;

  d_arr = malloc(sizeof(int) * N);
  if (d_arr == NULL) {
    printf("Error: Malloc failed!");
    exit(1);
  }

  for(i=0; i<N; i++) {
    array[i] = i;
    d_arr[i] = i*2;
  }

  // ..

}
