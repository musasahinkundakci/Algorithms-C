#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
  
  
  //Pointer to structer
  typedef struct abc{
    int x,y;
  }Abc;
  Abc i1={.x=5,.y=9};
  Abc *ptr=&i1;
  printf("%d %d",ptr->x,ptr->y);
  
  
  struct abc{
    int x,y,z;
  };//Designed intialization
  struct abc a={.x=5,.y=6,.z=0};

  //Structer array
  struct abc b[3];
  b[0].x=6;
  b[0].y=9;

  printf("%d",a.x);
  
  
  
  typedef int num;
  num num1=5;
  printf("%d",num1);
  /*
struct car becames car data type
type def is for creating new data type for example; 
*/
  typedef struct car{
    int miles;
    int year;
    char *name;
  }car;
  return 0;
}
