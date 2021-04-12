#include <stdio.h>
#include <string.h>
int main(void) {
  char *a="ey edip adanada pide ye";
  int j=strlen(a);
  for(int i=0;i<j;i++,j--){
    if(a[i]==a[j]){
      printf("Not palindrome!");
      return 0;
    }
    
  }
  printf("It is palindrom yeyyy.");
  return 0;
}
