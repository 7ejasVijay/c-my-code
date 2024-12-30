#include <stdlib.h>
#include <string.h>

struct personT {
  char *name;
  int age;
};

int main(void) {

  struct personT p1, *p2;

  p1.name = malloc(sizeof(char) * 8);
  strcpy(p1.name, "Zhichen");
  p1.age = 22;

  p2 = malloc(sizeof(struct personT));

  p2->name = malloc(sizeof(char) * 4);
  strcpy(p2->name, "Vic");
  p2->age = 19;

  free(p2);
  p2 = NULL;

  return 0;
}
