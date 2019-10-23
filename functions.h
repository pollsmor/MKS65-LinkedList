struct Node {
  int i;
  struct Node *next;
};

void print_list(struct Node *node);

struct Node * insert_front(struct Node *node, int i);

struct Node * free_list(struct Node *node);
