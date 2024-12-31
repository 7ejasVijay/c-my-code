#include <stdio.h>

int main(void) {

  int x = 5, y = 10;
  float pi = 3.14;

  float labs = 93.8;
  int midterm = 87;

  printf("Hello %s, here are your grades so far:\n", "Tanya");
  printf("\t Midterm: %d (out of %d)\n", midterm, 100);
  printf("\t Lab average: %f\n", labs);
  printf("\t Final report: %c\n", 'A');

  /*printf("x is %p and y is %p\n", &x, &y);*/
  /*printf("%g \t %s \t %d\n", pi, "hello", y);*/

  return 0;
}
