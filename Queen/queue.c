#include <stdio.h>
#include "queue.h"

Node *head=NULL;
Node *p=NULL;
void enqueue(Node *in_node){
  if(!head){
    head=in_node;
    head->next=NULL;
    p=head;
  }
  else{
    p->next=in_node;
    p=p->next;
    p->next=NULL;
  }
}

int dequeue(Node *out_node){
  if(head){
    *out_node=*head;
    head=head->next;
    return 0;
  }
  return -1;
}

int main(){
  char a[]="wqnmlgb";
  char b[]="ghjkl";
  Node node1={a,NULL};
  Node node2={b,NULL};
  enqueue(&node1);
  enqueue(&node2);
  Node out;
  for(Node *p=head;p;p=p->next){
    dequeue(&out);
    printf("%s\n",out.data );
  }
}
