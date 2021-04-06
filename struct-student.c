#include <stdio.h>
#define SIZE 1
struct student{
  char name[40];
  
  int school_no;
  float mid,fin,gpa;
};
void scan_student(struct student *a);
int get_grade(struct student s);
int main(void) {
  struct student student_1[SIZE];
  for(int i=0;i<SIZE;i++){
    scan_student(&student_1[i]);
  }
  for(int i=0;i<SIZE;i++){
    printf("Name:%s\nSchool No:%d\nGpa:%.2f\n",student_1[i].name,student_1[i].school_no,student_1[i].gpa);
    printf("\n");
  }

  return 0;
}
void scan_student(struct student *a){
  printf("Name: ");
  gets(a->name);
  printf("School No: ");
  scanf("%d",&a->school_no);
  printf("Mid-term and Final: ");
  scanf("%f %f",&a->mid,&a->fin);
  a->gpa=a->mid*(0.4)+a->fin*(0.6);
}
