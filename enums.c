#include <stdio.h>

enum days_of_week {
  MON,
  TUES,
  WED,
  THURS,
  FRI
};


int main(void) {

  enum days_of_week day;

  day = THURS;

  if (day > WED) {
    printf("The weekend is arriving soon!\n");
  }

}
