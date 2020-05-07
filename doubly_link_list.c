#include<stdio.h>

struct node{
  int data;
  struct node *next;
  struct node *prev;
}*start=NULL,*q;


int main(){
  char ch;
  while(1){
    printf("Enter the choice\n1-create\n2-Display\n");
    scanf("%d",&ch);   
    switch(ch){
      case 1:
        create();
      case 2:
        display();
      
      
    }
  }
}

void create(){

struct node *ptr = ( struct node * )malloc( sizeof ( struct node) );
printf("Enter the data\n");
scanf("%d",&ptr->data);

if(start == NULL){
  ptr->next = NULL;
  ptr->prev = NULL;
  start = ptr;
}
else{
  q=start;
  while(q->next != NULL){
    q = q->next; 
  }
  q->next = ptr;
  ptr->next = NULL;
  ptr->prev = q;  
  }
}

void display(){

  q= start;
  while(q!=NULL){
    printf(" %d ",q->data);
    q=q->next;
  }


}
