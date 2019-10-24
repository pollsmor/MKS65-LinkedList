struct Node {
  int i;
  struct Node *next;
};

void print_list(struct Node *list);

struct Node * insert_front(struct Node *list, int i);

struct Node * free_list(struct Node *list);

struct Node * removeNode(struct Node *front, int data);
