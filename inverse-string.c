#include <stdio.h>
void ters(char a[],int size);
int main(void) {
  char a[]="musa sahin kundakci";
  
  
  ters(a,sizeof(a)-1);
  printf("%s",a);
  return 0;
}
void ters(char a[],int size){
  int b[size];
  for(int i=0;i<size;i++){
    b[i]=a[i];
  }
  for(int i=0;i<size;i++){
    a[i]=b[size-i-1];
  }
}
