#include <stdio.h>
void printMatrix(int m[][3])
{
    int i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            printf("%3d",m[i][j]);
        printf("\n");
    }
}
void sortmyarray(int x[],int element){
  int geçici;
  for(int i=0;i<element;i++){
    for(int j=0;j<element-1;j++){
      if(x[j]>x[j+1]){
        geçici=x[j+1];
        x[j+1]=x[j];
        x[j]=geçici;
    }
    }
  }
}
void multmatrix(int a[][3],int b[][3]){
  int x,y,z,mul[3][3],total=0;
  for(x=0;x<3;x++){
    for(y=0;y<3;y++){
      for(z=0;z<3;z++){
        total=total+a[x][z]*b[z][y];
        mul[x][y]=total;
      }
      total=0;
    }
  }
  printMatrix(mul);
}

int main(void) {
  int a[3][3]={{1,2,3},{3,4,5},{5,6,7}};
  int b[3][3]={{3,2,5},{23,4,5},{1,2,3}};
  int dizi[3]={1,6,5};
  sortmyarray(dizi,3);
  for(int i=0;i<3;i++){
    printf("%5d",dizi[i]);
  }
  return 0;
}
