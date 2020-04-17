#include<stdio.h>
#include<stdlib.h>

void Search();
void Display();
void create();
void Insert();
void Delete_data();
void Reverse();
void Middle_node();

struct node{
int data;
struct node *next;
}*start=NULL,*p,*q;

int main(){
int num;
while(1){

printf("\nEnter the choice\n1-Create\n2-Display\n3-Search\n4-Insert\n5-Delete_data\n6-Reverse\n7-Middle Node\n");
scanf("%d",&num);
switch(num){

case 1:
    create();
    break;
case 2:
    Display();
    break;
case 3:
    Search();
    break;
case 4:
    Insert();
    break;
case 5:
    Delete_data();
    break;
case 6:
    Reverse();
    break;
case 7:
    Middle_node();
    break;

          }
      }
}

void create(){
 struct node *tmp = (struct node *)malloc(sizeof(struct node));
 printf("Enter data");
 scanf("%d",&tmp->data);

 if(start == NULL){
  start = tmp;
  tmp->next = NULL;
  
 }
 else{
  p = start;
  while(p->next != NULL)
      p = p->next;

  p->next = tmp;
  tmp->next = NULL;
  
 }

}
void Display(){
   p = start;
   while( p!=NULL){
      printf(" %d ",p->data);
      p = p->next;
   }

}
void Search(){
  int data;
  int count=1;
  printf("Enter the data to search");
  scanf("%d",&data);

  p =start;
  while(p!= NULL){
      if(p->data == data){
          printf("Data found at %d pos\n",count);
          return;
      }
      count++;
      p=p->next;

    }

}

void Insert(){

  struct node *tmp = (struct node*)malloc(sizeof(struct node));
  int pos,count=1;
  printf("Enter position to insert\n");
  scanf("%d",&pos);
  printf("Enter data to insert\n");
  scanf("%d",&tmp->data);
  p =start;
  if(pos == 1){
    tmp->next = start;
    start = tmp;
  }  
  else{
    while(p!=NULL){
       if(count == pos-1){
         tmp->next =p->next;
         p->next =tmp;
         return;
       }
       p = p->next;
       count++;
    }


  }
} 

void Delete_data(){
  int data;
  struct node *tmp;
  printf("Input data to delete\n");
  scanf("%d",&data);
  p=start;
  if(start->data == data){
    tmp = start;
    start = start->next;
    free(tmp);
  }
  else{
   while(p->next !=NULL){
     if(p->next->data == data){
       tmp = p->next;
       p->next = tmp ->next;
       free(tmp);
       return;
     }
     p = p->next;
   }
   printf("sorry :(\n");
 }

}

void Reverse(){

  struct node *p1,*p2,*tmp;
  p1 = start;
  p2=start->next;
  start->next =NULL;
  while(p2!=NULL){
    tmp =p2->next;
    p2->next = p1;
    p1=p2;
    p2=tmp;
  }
  start = p1;

}


void Middle_node(){

  p = start;
  q = start;
 
  while( p!=NULL && p->next !=NULL){
  p = p->next->next;
  q = q->next;

  }
  printf("Middle node is %d\n",q->data);
}

