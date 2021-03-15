#include <stdio.h>
void bubbleSort(int dizi[],int (*func)(),int size);
void swap(int *a,int *b);
int ascending(int a,int b);
int descending(int a,int b);
int main(void) {
  int size,choice;
  printf("Kaç elemanlı dizi olsun: ");
  scanf("%d",&size);
  int dizi[size];
  for (int i =0;i<size;i++){
    printf("Eleman %d: ",i);
    scanf("%d",&dizi[i]);
  }
  printf("Ascending or descending type(0 or 1)");
  scanf("%d",&choice);
  if(choice)
    bubbleSort(dizi,descending,size);
  else
    bubbleSort(dizi,ascending,size);
  printf("Yeni dizi;\n");
  for (int i =0;i<size;i++){
    printf("%5d ",dizi[i]);

  }
  return 0;
}
void bubbleSort(int dizi[],int (*func)(),int size){
  for(int i=0;i<size;i++){
    for(int j=0;j<size-1;j++){
      if(func(dizi[j],dizi[j+1])){
        swap(&dizi[j],&dizi[j+1]);
      }
    }
  }
}
void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
  
}
int ascending(int a,int b){
  return a>b;
}
int descending(int a,int b){
  return a<b;
}
