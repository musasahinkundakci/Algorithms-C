#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
  int school_no,gpa;
  char name[30];
  struct student *next;
}student;
int main(void) {
  student *ptrfirst;
  ptrfirst=malloc(sizeof(student));
  ptrfirst->school_no=203131049;
  ptrfirst->gpa=90;
  strcpy(ptrfirst->name,"Musa Şahin Kundakcı");
  ptrfirst->next=malloc(sizeof(student));
  ptrfirst->next->next=malloc(sizeof(student));

  
  return 0;
}
