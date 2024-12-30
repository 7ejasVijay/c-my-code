#include <stdio.h>
#include <string.h>

struct studentT {
  char name[64];
  int age;
  float gpa;
  int grad_yr;
};

int checkID(struct studentT s, int min_age);
void changeName(char *old, char *new);

int main(void) {

  int can_vote;
  struct studentT student1, student2;

  strcpy(student1.name, "Ruth");
  student1.age = 17;
  student1.gpa = 3.5;
  student1.grad_yr = 2021;

  // structs are lvalues
  student2 = student1;
  strcpy(student2.name, "Frances");
  student2.age = student1.age + 4;

  // passing a struct
  can_vote = checkID(student1, 18);
  printf("%s %d\n", student1.name, can_vote);

  can_vote = checkID(student2, 18);
  printf("%s %d\n", student2.name, can_vote);

  changeName(student2.name, "Kwame");
  printf("Student 2's name is now %s\n", student2.name);

  return 0;

}

int checkID(struct studentT s, int min_age) {
  int ret = 1;

  if (s.age < min_age) {
    ret = 0;
    s.age = min_age + 1;
  }

  return ret;
}

void changeName(char *old, char *new) {
  if ((old == NULL) || (new == NULL)) {
    return;
  }

  strcpy(old, new);
}
