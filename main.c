#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
  struct Node *n1;
  printf("Printing empty list: \n");
  print_list(n1);
  printf("\n");

  printf("Adding #s 0-9 to list. \n");
  n1 = insert_front(n1, 0);
  n1 = insert_front(n1, 1);
  n1 = insert_front(n1, 2);
  n1 = insert_front(n1, 3);
  n1 = insert_front(n1, 4);
  n1 = insert_front(n1, 5);
  n1 = insert_front(n1, 6);
  n1 = insert_front(n1, 7);
  n1 = insert_front(n1, 8);
  n1 = insert_front(n1, 9);
  printf("Printing list: \n");
  print_list(n1);
  printf("\n");

  printf("Freeing list. \n");
  n1 = free_list(n1);
  printf("Printing list: \n");
  print_list(n1);
  printf("\n");

  return 0;
}
