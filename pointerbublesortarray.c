#include <stdio.h>
void bubble(int x[],int length);
void swap(int *x,int *y);
int main(void) {
  int length;
  printf("Dizinin uzunluğu: ");
  scanf("%d",&length);
  int dizi[length];
  for(int i=0;i<length;i++){
    int x;
    printf("%d inci eleman: ",i);
    scanf("%d",&x);
    dizi[i]=x;
  }
  bubble(dizi,length);
  for(int i=0;i<length;i++){
    printf("%d\n",dizi[i]);
  }

  return 0;
}
void bubble(int x[],int length){
  for(int i=0;i<=length;i++){
    for(int j=0;j<length-1;j++){
      if(x[j]>x[j+1]){
        swap(&x[j],&x[j+1]);
      }
    }
  }
}
void swap(int *x,int *y){
  int gecici=*x;
  *x=*y;
  *y=gecici;
}
