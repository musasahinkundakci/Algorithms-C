//Insertion Sort
//https://visualgo.net/en/sorting

#include <stdio.h>
void printArr(int *arr,int size);
void sortArr(int *arr,int size);

int main(void) {
  int arr[]={3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
  int sizeOfArr=sizeof(arr)/sizeof(arr[0]);
  printArr(arr, sizeOfArr);
  sortArr(arr,sizeOfArr);
  printArr(arr, sizeOfArr);

  return 0;
}
void printArr(int *arr,int size){
  for(int i=0;i<size;i++){
    printf("%4d",arr[i]);
  }
  printf("\n");
}
void sortArr(int *arr,int size){
  int temp;
  int j,i;
  for(i=1;i<size;i++){
    int selected=arr[i];
    for(j=i-1;j>=0 && selected<=arr[j];j--){
      arr[j+1]=arr[j];
    }
    arr[j+1]=selected;
  }
}
