#include <stdio.h>
#include"Link_list.h"


Node *head=NULL;
Node *p=NULL;
void insert(Node *insert_node){
  if(!head){
    head=insert_node;
    insert_node->next=NULL;
    insert_node->pre=NULL;
    p=head;
  }
  else{
    insert_node->pre=p;
    insert_node->next=NULL;
    p->next=insert_node;
    p=p->next;
  }
}

void remove_node(Node *p){
  if(p==head){
    head=head->next;
  }
  else{
    if(!p->next){
      p->pre->next=NULL;
    }
    else{
      p->pre->next=p->next;
      p->next->pre=p->pre;
    }
  }
}
int main(){
  char a[]="wqnmlgb";
  char b[]="ghjkl";
  char c[]="g;;;;jkk";

  // int a=5;
  // int b=6;
  Node inode={a,NULL,NULL};
  Node inode2={b,NULL,NULL};
  Node inode3={c,NULL,NULL};
  insert(&inode);
  insert(&inode2);
  insert(&inode3);
  for(Node *p=head;p;p=p->next){
    printf("%s\n",p->data );
  }
  remove_node(&inode3);
  for(Node *p=head;p;p=p->next){
    printf("%s\n",p->data );
  }
}
