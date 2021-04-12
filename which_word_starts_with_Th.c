#include <stdio.h>
#include <string.h>
int main(void) {
  char ar[5][20];
  for(int i=0;i<5;i++){
    printf("String gir amk:");
    scanf("%s",&ar[i][0]);
  }
  for(int i=0;i<5;i++){
    if(ar[i][0]=='T' && ar[i][1]=='h'){
      printf("%s starts with 'Th'\n",&ar[i][0]);

    }

  }
  return 0;
}
