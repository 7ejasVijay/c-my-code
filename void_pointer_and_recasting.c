#include <stdlib.h>

int main(void) {

  void *gen_ptr;
  int x;
  char ch;

  gen_ptr = &x;
  gen_ptr = &ch;

  int *array;
  char *str;

  array = (int *) malloc(sizeof(int) * 10);
  str = (char *) malloc(sizeof(char) * 20);

  *array = 10;
  str[0] = 'a';

}


