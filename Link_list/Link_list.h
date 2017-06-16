#ifndef LINK_LIST_H
#define LINK_LIST_H
#undef data_type
#define data_type char

typedef struct def_node{
  data_type *data;
  struct def_node *next;
  struct def_node *pre;
}Node;

void insert(Node *insert_node);
void remove_node(Node *p);


#endif
