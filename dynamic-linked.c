#include <stdio.h>
#include <stdlib.h>
typedef struct student{
  int id;
  struct student *next;
}Student;
void insert(Student **head);
void display();
void delete(Student **head);
int main(void) {
  Student *startptr;
  startptr=NULL;
  int choice;
  while(1){
    printf("1-insert 2-Delete 3-Display:\n?");
    scanf("%d",&choice);
    switch(choice){
      case 1:{
        insert(&startptr);
        break;
      }
      case 2:{
        delete(&startptr);
        break;
      }
      case 3:{
        display(&startptr);
        break;
      }
    }
  }
  return 0;
}
void insert(Student **head){
  Student *newPtr=NULL;
  Student *current=NULL;
  Student *previous=NULL;
  newPtr=malloc(sizeof(Student));
  int id;
  printf("ID:\n?");
  scanf("%d",&id);
  newPtr->id=id;
  newPtr->next=NULL;
  if((*head)==NULL){
    (*head)=newPtr;
  }
  else{
    
    current=*head;
    while(current!=NULL && id > current->id){
      previous=current;
      current=current->next;
    }
    if(previous==NULL){
      newPtr->next=current;
      (*head)=newPtr;
    }
    else{
      //printf("Debugger!\n");
      previous->next=newPtr;
   
      newPtr->next=current;
    }

  }
  printf("Element is added!\n");
}
void delete(Student **head){
  int id;
  Student *previous=NULL;
  Student *current=NULL;
  Student *temp;
  printf("Element's ID:");
  scanf("%d",&id);
  current=*head;
  while(current!=NULL && current->id != id){
    previous=current;
    current=current->next;
  }
  if(previous==NULL && (*head)->id ==id){
    temp=*head;
    (*head)=(*head)->next;
    free(temp);
    printf("Element is deleted");
    
  }
  else{
    if(current->next != NULL){
      previous->next=current->next;
      free(current);
      printf("Element is deleted");
    }
    else{
      previous->next=NULL;
      free(current);
      printf("Element is deleted");
    }
  }
}
void display(Student **head){
  Student *temp;
  temp=*head;
  while(temp!=NULL){
    printf("%d -|- ",temp->id);
    temp=temp->next;
  }
  printf("\n");
}
