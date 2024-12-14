#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  int size;
  char str[64];
  char *new_str = NULL;

  strcpy(str, "Hello");
  size = strlen(str);

  new_str = malloc(sizeof(char) * (size + 1));
  if (new_str == NULL) {
    printf("Malloc failed. exiting...");
    exit(1);
  }

  strcpy(new_str, str);
  printf("%s %s\n", str, new_str);

  strcat(str, " There");
  printf("%s\n", str);

  free(new_str);
  new_str = NULL;

  return 0;
}
