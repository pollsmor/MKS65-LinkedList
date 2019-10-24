#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void print_list(struct Node *list) {
  if (list == NULL) { //empty list
    printf("[ ]");
    return;
  }

  printf("[ ");

  struct Node *current = list;
  while (current != NULL) {
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
