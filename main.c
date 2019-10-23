#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
  struct Node *n1 = insert_front(n1, 69);
  printf("Printing empty list: ");
  print_list(n1);

  printf("Adding #s 1337, 69, 420, 42, -2964, 0 to list.");
  //n1 = insert_front(n1, 69);
  printf("Printing list: ");

  return 0;
}
