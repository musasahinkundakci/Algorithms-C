//Not my code 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
  char data;
  struct listNode *nextPtr;
}ListNode_t;
void insert(ListNode_t **sPtr ,char value);
char delete(ListNode_t **sPtr,char value);
int isEmpty(ListNode_t *sPtr);
void printList(ListNode_t *currentPtr);
void instructions(void);
int main(void) {
  ListNode_t  *startPtr=NULL;
  int choice=0;
  char item=0;

  instructions();
  printf("? ");
  scanf("%d",&choice);
  while(choice!=3){
    switch(choice){
    case 1:
      printf("Enter a character: ");
      scanf("\n%c",&item);
      insert(&startPtr,item);
      printList(startPtr);
      break;
    
    case 2:
      if(!isEmpty(startPtr)){
        printf("Enter character to be deleted: ");
        scanf("\n%c",&item);
        if(delete(&startPtr,item)){
          printf("%c deleted.\n",item);
          printList(startPtr);
        }
        else{
          printf("%c not found.\n\n",item);
        }
      }
      else{
        printf("List is empty.\n\n ");
      }
      break;
    default:
      printf("Invalid choice\n\n");
      break;
    }
    instructions();
    printf("? ");
    scanf("%d",&choice);
  }
  printf("End of the run.\n");
  return 0;
}
void instructions(void){
  printf("Enter your choice:\n"
    " 1 to insert an element into the list\n"
    " 2 to delete an element from the list\n"
    " 3 to end.\n");

}
void insert(ListNode_t **sPtr,char value){
  ListNode_t *newPtr=NULL;
  ListNode_t *previousPtr=NULL;
  ListNode_t *currentPtr=NULL;
  newPtr=malloc(sizeof(ListNode_t));
  if(newPtr != NULL){
    newPtr->data=value;
    newPtr->nextPtr=NULL;
    previousPtr=NULL;
    currentPtr=*sPtr;
    while(currentPtr!=NULL && value>currentPtr->data){
      previousPtr=currentPtr;
      currentPtr=currentPtr->nextPtr;
    }
    if(previousPtr==NULL){
      newPtr->nextPtr=*sPtr;
      *sPtr=newPtr;
    }
    else{
      previousPtr->nextPtr=newPtr;
      newPtr->nextPtr=currentPtr;
  }
  } 
  else{
    printf("%c not inserted.No memory available.\n",value);
  }
}
char delete(ListNode_t **sPtr,char value){
  ListNode_t *previousPtr=NULL;
  ListNode_t *currentPtr=NULL;
  ListNode_t *tempPtr=NULL;

  if(value==(*sPtr)->data){
    tempPtr=*sPtr;
    *sPtr=(*sPtr)->nextPtr;
    free(tempPtr);
    return value;
  }
  else{
    previousPtr=*sPtr;
    currentPtr=(*sPtr)->nextPtr;
    while(currentPtr!=NULL && currentPtr->data!=value){
      previousPtr=currentPtr;
      currentPtr=currentPtr->nextPtr;
    }
    if(currentPtr!=NULL){
      tempPtr=currentPtr;
      previousPtr->nextPtr=currentPtr->nextPtr;
      free(tempPtr);
      return value;
    }
  }
  return '\0';
}
int isEmpty(ListNode_t *sPtr){
  return sPtr==NULL;
}
void printList(ListNode_t *currentPtr){
  if(currentPtr==NULL){
    printf("List is empty\n");

  }
  else{
    printf("The list is:\n");

    while(currentPtr!=NULL){
      printf("%c -->",currentPtr->data);
      currentPtr=currentPtr->nextPtr;
    }
    printf("NULL\n\n");

  }
}
