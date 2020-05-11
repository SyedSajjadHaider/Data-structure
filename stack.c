#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void check();

struct node{

int data;
struct node *next;

}*start=NULL,*ptr,*temp;

int main(){
int var;
while(1){
 printf("choose option\n1-PUSH\n2-POP\n3-CHECK\n");
 scanf("%d",&var);
  switch(var){
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      check();
      break;
  }
 }
}

void push(){

ptr = (struct node *)malloc(sizeof(struct node));

if(ptr == NULL){
   printf("stack full");
   return;
}
scanf("%d",&ptr->data);

ptr->next = start;
start = ptr;

}

void pop(){

if(start == NULL){
   printf("No elements\n");
   return;
}
   
printf("Element to be popped is %d\n",start->data);
temp = start;
start = start->next;
free(temp);

}

void check(){

}
