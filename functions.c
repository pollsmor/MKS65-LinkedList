#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void print_list(struct Node *list) {
  if (list == NULL)
    printf("[ ]");

  printf("[ ");

  struct Node *current = list;
  while (current -> next != NULL) {
    printf("%d ", current -> i);
    current = current -> next;
  }

  printf("]");
}

struct Node * insert_front(struct Node *list, int i) {
  struct Node *front = malloc(sizeof(struct Node));
  front -> i = i;
  front -> next = list;

  return front;
}
