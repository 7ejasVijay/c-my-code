#include <stdio.h>
#include <string.h>

int main(void) {

  // Static string
  char name[20] = "John";
  char name_copy[20];

  // String length (minus the null terminating character)
  printf("%lu\n", strlen(name));

  // String concatenation
  strcat(name, " Doe");
  printf("%s\n", name);

  // String copy
  strcpy(name_copy, name);
  printf("%s\n", name_copy);

  char *mystr = "string literal value";
  printf("%s\n", mystr);
}
