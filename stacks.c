#include <stdio.h>
#include <stdlib.h>
typedef struct stack{
  int id;
  struct stack *next;
}stack;
void insert(stack **topPtr);
void pop(stack **topPtr);
void display(stack **topPtr);
void top(stack **topPtr);
int main(void) {
  int choice;
  stack *topPtr;
  topPtr=NULL;
  topPtr=malloc(sizeof(stack));
  
  while(1){
    printf("1-Insert\n2-Display\n3-Top\n4-Pop\n?");
    scanf("%d",&choice);
    switch(choice){
      case 1:{
        insert(&topPtr);
        break;
      }
      case 2:{
        display(&topPtr);
        break;
      }
      case 3:{
        top(&topPtr);
      }
      case 4:{
        pop(&topPtr);
      }
    }
  }
  return 0;
}
void insert(stack **topPtr){
  int id;
  printf("ID:");scanf("%d",&id);
  if(*topPtr==NULL){
    (*topPtr)->id=id;
    (*topPtr)->next=NULL;
  }
  else{
    stack *newPtr=malloc(sizeof(stack));;
    stack *old=malloc(sizeof(stack));
    old=*topPtr;
    newPtr->id=id;
    newPtr->next=old;
    *topPtr=newPtr;
    
  }
}
void pop(stack **topPtr){
  if(*topPtr == NULL)
    printf("There is no element in stack!\n");
  else if((*topPtr)->next==NULL){
    stack *temp=*topPtr;
    free(temp);
    temp=malloc(sizeof(stack));
  }
  else{
    stack *temp=*topPtr;
    *topPtr=(*topPtr)->next;
    free(temp);
    
  }
}
void display(stack **topPtr){
  stack *current=*topPtr;
  while(current->next!=NULL){
    printf("%d -> ",current->id);
    current=current->next;
  }
  printf("\n");
}
void top(stack **topPtr){
  printf("%d\n",(*topPtr)->id);
}
