#include <stdio.h>

int main(void) {

  float x, y;
  char ch;

  x = 4.50001;
  y = 5.199999;
  ch = 'a';

  printf("%.1f %.1f\n", x, y);
  printf("%6.1f %6.1f %c\n", x, y, ch);
  printf("%6.1f %6.1f %c\n", x+1, y+1, ch+1);
  printf("%6.1f %6.1f %c\n", x+20, y+20, ch+2);

  int z = 26;

  printf("z is %d in decimal, %x in hexadecimal, and %o in octal\n", z, z, z);
  printf("ch value is %d which is ASCII value of %c\n", ch, ch);
  printf("x in scientific notation is %.2e \n", x);

  return 0;

}
