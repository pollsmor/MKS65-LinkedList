#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

struct Node * insert_front(struct Node *node, int i) {
  struct Node *front = malloc(sizeof(struct Node));
  front -> i = i;
  front -> next = node;

  return front;
}
