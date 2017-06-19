#ifndef queue_H
#define queue_H

#undef data_type
#define data_type char

typedef struct def_node{
  data_type *data;
  struct def_node *next;
}Node;

void enqueue(Node *in_node);
int dequeue(Node *out_node);

#endif
