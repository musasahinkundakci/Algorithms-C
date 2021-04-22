#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student{
  int school_no,gpa;
  char name[30];
  struct student *next;
}Student;
int main(void) {
  Student *ptrfirst;
  ptrfirst=malloc(sizeof(Student));
  ptrfirst->school_no=203131049;
  ptrfirst->gpa=90;
  strcpy(ptrfirst->name,"Musa Şahin Kundakcı");
  ptrfirst->next=malloc(sizeof(Student));
  ptrfirst->next->next=malloc(sizeof(Student));
  ptrfirst->next->gpa=6;
  
  
  return 0;
}
