#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("You inputed %d commands\n", argc - 1);

  for(int i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }
}
