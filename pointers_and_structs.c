#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct studentT {
  char name[64];
  int age;
  float gpa;
  int grad_yr;
};

int main(void) {
  
  struct studentT s;
  struct studentT *sptr;

  strcpy(s.name, "Freya");
  s.age = 18;
  s.gpa = 4.0;
  s.grad_yr = 2020;

  sptr = malloc(sizeof(struct studentT));
  if (sptr == NULL) {
    printf("Malloc failed\n");
    exit(1);
  }

  (*sptr).grad_yr = 2020;
  (*sptr).age = s.age + 1;

  sptr->gpa = 3.5;
  strcpy(sptr->name, "Lars");

  printf("%s\n", sptr->name);

  free(sptr);
  sptr = NULL;

}
