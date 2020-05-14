#include<stdio.h>
#include<stdlib.h>
void delete();
void insert();

struct node {
  int data;
  struct node *link;
}*front=NULL,*rear=NULL;

int main(){
  int var;
  while(1){
    printf("Enter the choice \n1-Insert\n2-Delete");
    scanf("%d",&var);
    switch(var){
      case 1:
        insert();
        break;
      case 2:
        delete();
        break;
    }
  }
}

void insert(){
  struct node *ptr = (struct node*)malloc(sizeof(struct node));
  printf("Enter data\n");
  scanf("%d",&ptr->data);
  ptr->link = NULL;
  if(front == NULL){
    front = ptr;
  }
  else{
    rear->link = ptr;
  }  
  rear=ptr;
}

void delete(){

  if(front == NULL)
    return;
  struct node *temp = front;
  front = front->link;
  printf("Deleted data %d\n",temp->data);
  free(temp);
}
