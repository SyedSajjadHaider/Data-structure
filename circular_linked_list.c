#include<stdio.h>

struct node{
  int data;
  struct node *link;

}*start=NULL,*temp;

int main(){
 int var;
  while(1){
    printf("\nEnter choice\nCreate\ncheck\ndisplay\n");
    scanf("%d",&var);
    switch(var){
      case 1:
        create();
        break;
      case 2:
        check();
        break;
      case 3:
        display();
        break;
      
    }
  }
}

create(){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  printf("Enter data\n");
  scanf("%d",&ptr->data);

  if(start == NULL){
    start=temp=ptr;
    ptr->link =start;
  }
  else{
    temp->link = ptr;
    ptr->link = start;
    temp = ptr;

   
  }
  
}

check(){

if(temp->link->data == start->data)
  printf("Success");

}


display(){
struct node *p;

  p = start;
  while(p->link != start){
    printf(" %d ",p->data);
    p=p->link;
  }
  printf(" %d ",p->data);
}
