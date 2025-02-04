#include <stdio.h>

// Prototype
int sum_digits(int number);

int main(void) {
  int number;

  printf("Enter number: ");
  scanf("%d", &number);

  printf("%d\n", sum_digits(number));
}

// Uses recursion for summation
// Recursion is not good for embedded systems
int sum_digits(int number) {
  if (number < 10) {
    return number;
  } else {
    return (number % 10) + sum_digits(number / 10);
  }
}
