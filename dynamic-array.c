#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n;
  printf("How much elements: ");
  scanf("%d",&n);
  int *arr=(int*)malloc(sizeof(int)*n);
  printf("Input the elements;\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  printf("Your array with %d elements;\n",n);
  for(int i=0;i<n;i++)
    printf("%5d",arr[i]);
  printf("\n");
  free(arr);
  
  return 0;
}
