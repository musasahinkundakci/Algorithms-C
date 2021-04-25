#include <stdio.h>
#include <string.h>
typedef struct{
  int first,second,finalone,schoolno;
  float gpa;
  char name[50];
   }student;
//************************************//
int main(void) {
  struct{
    char *a;
  }car1,car2;
  struct employee{
    int salary;
    char *name;
  }employee2;
  struct employee employee1;
  employee1.name="Musa";
  employee1.salary=2000;
  employee2.salary=5000;
  
  
  //******************************************//
  student number1;
  number1.first=50;
  number1.second=100;
  number1.finalone=75;
  number1.gpa=(number1.second+number1.first)/2*40/100+number1.finalone*60/100;
  number1.schoolno=2019555049;
  strcpy(number1.name,"Musa Şahin Kundakcı");
  printf("Öğrenci Bilgileri;\nName:%s\nSchool no:%d\nGpa:%.2f\n",number1.name,number1.schoolno,number1.gpa);
  return 0;
}
