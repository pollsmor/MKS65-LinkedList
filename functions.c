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

struct Node * free_list(struct Node *list) {
  struct Node *current = list;
  while (current != NULL) {
    struct Node *next = current -> next;
    printf("Freeing node: %d \n", current -> i);
    free(current);
    current = next;
  }

  list = NULL;

  return list;
}

struct Node * removeNode(struct Node *front, int data) {
  struct Node *prev = NULL;
  struct Node *current = front;
  while (current != NULL) {
    if (current -> i == data) {
      if (prev == NULL) { //case where the first element is removed - start of list is now the next struct
        printf("Data found; freeing the first node and setting the front to the next node. \n");
        struct Node *next = current -> next;
        free(current);
        return next;
      }

      printf("[%d] Data found; the node containing this data will now be freed. \n", current -> i);
      prev -> next = current -> next;
      free(current);
      return front;
    }

    prev = current;
    current = current -> next;
  }

  //Couldn't find the data
  printf("Data not found; nothing has been changed. \n");
  return front;
}
