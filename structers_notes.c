#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
struct car becames car data type
type def is for creating new data type for example; 
*/

int main(void) {
  typedef int num;
  num num1=5;
  printf("%d",num1);
  typedef struct car{
    int miles;
    int year;
    char *name;
  }car;
  return 0;
}
