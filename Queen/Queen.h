#ifndef QUEEN_H
#define QUEEN_H

#undef data_type
#define data_type char

typedef struct def_node{
  data_type *data;
  struct def_node *next;
}Node;

void in_queen(Node *in_node);
int out_queen(Node *out_node);

#endif
