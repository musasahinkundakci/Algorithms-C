#include <stdio.h>
#include <string.h>
int main(void) {
  char a[100];
  gets(a);
  for(int i='a';i<'z';i++){
    int count=0;
    for(int j=0;j<strlen(a);j++){
      if(a[j]==i){
        count+=1;
      }
    }
    if(count>=1)
      printf("%c occures %d times\n",i,count);
  }
  return 0;
}
