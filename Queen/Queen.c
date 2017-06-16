#include <stdio.h>
#include "Queen.h"

Node *head=NULL;
Node *p=NULL;
void in_queen(Node *in_node){
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

int out_queen(Node *out_node){
  if(head){
    *out_node=*head;
    head=head->next;
  }
  return -1;
}

int main(){
  char a[]="wqnmlgb";
  char b[]="ghjkl";
  Node node1={a,NULL};
  Node node2={b,NULL};
  in_queen(&node1);
  in_queen(&node2);
  Node out;
  for(Node *p=head;p;p=p->next){
    out_queen(&out);
    printf("%s\n",out.data );
  }
}
