#include <stdio.h>
void sortArr(int *arr,int size);
void printArr(int *arr,int size);
int main(void) {
  int arr[]={3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
  int sizeArr=sizeof(arr)/sizeof(arr[0]);
  printArr(arr, sizeArr);
  sortArr(arr, sizeArr);
  printArr(arr, sizeArr);
  return 0;
}
void sortArr(int *arr,int size){
  int temp,i,j;
  for(i=0;i<size;i++){
    int min=arr[i];
    int indexOfMin=i;
    for(j=i+1;j<size;j++){
      if(arr[j]<min){
        min=arr[j];
        indexOfMin=j;
      }
    }
    temp=arr[i];
    arr[i]=min;
    arr[indexOfMin]=temp;
    
  }
}
void printArr(int *arr,int size){
  for(int i=0;i<size;i++){
    printf("%4d",arr[i]);
  }
  printf("\n");
}
