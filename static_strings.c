#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[10];
  char str2[10];

  str1[0] = 'h';
  str1[1] = 'i';
  str1[2] = '\0';

  strcpy(str2, str1);

  str2[1] = 'o';

  printf("%s %s\n", str1, str2);

  return 0;
}
