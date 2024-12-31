#include <stdio.h>
#include <stdlib.h>

#define SIZE 2

struct node {
  int data;
  struct node *next;
};

int main(void) {

  int i;
  struct node *head, *temp;

  head = NULL;

  head = malloc(sizeof(struct node));
  if (head == NULL) {
    printf("Malloc Failed\n");
    exit(1);
  }

  head->data = 1;
  head->next = NULL;

  for (i = 0; i < SIZE; i++) {
    temp = malloc(sizeof(struct node));
    if (temp == NULL) {
      printf("Malloc failed\n");
      exit(1);
    }

    temp->data = i;
    temp->next = head;
    head = temp;
  }

}
