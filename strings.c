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
  strncat(name, " is black", 8);
  printf("%s\n", name);

  // String copy
  strcpy(name_copy, name);
  printf("%s\n", name_copy);

  // String copy with size, need to null terminate the string on the heap
  strncpy(name_copy, name_copy, 6);
  printf("%s\n", name_copy);

  // String copy with size, no need to null terminate the string on the heap
  strlcpy(name_copy, name_copy, 2);
  printf("%s\n", name_copy);

  // Comparison
  printf("%d\n", strcmp("all", "all"));
  printf("%d\n", strncmp("alligator", "alld", 3));

  // Substrings
  char *ptr;
  ptr = strstr(name_copy, "Doe");
  if (ptr != NULL) {
    printf("%s\n", ptr);
  }

  ptr = strchr(name_copy, 'c');
  if (ptr != NULL) {
    printf("%s\n", ptr);
  }

  char *mystr = "string literal value";
  printf("%s\n", mystr);
}
