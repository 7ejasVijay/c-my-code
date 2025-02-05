#include <string.h>

#define MAXNAME  (40)
#define MAXCLASS (40)

enum class_year {
  FIRST = 1,
  SECOND,
  JUNIOR,
  SENIOR,
  POSTGRAD
};

typedef enum class_year classYr;

struct studentT {
  char name[MAXNAME];
  classYr year;
  float gpa;
};

typedef struct studentT studentT;

typedef unsigned long long ull;

int main(void) {

  studentT class[MAXCLASS];
  classYr yr;
  ull num;

  num = 123456789;
  yr = JUNIOR;
  strcpy(class[0].name, "John");
  class[0].year = SENIOR;
  class[0].gpa = 3.75;

  // ...

}
