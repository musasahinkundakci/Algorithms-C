#include <stdio.h>

int main(void) {
  FILE *ptr;
  int a=9999;
  char name[30];
  
  
  while(1){
    printf("1-Add\n2-Display\n3-exit");
    scanf("%d",&a);
    switch (a){
      case 1:{
        ptr=fopen("names.txt","w");
        gets(name);
        while(!feof(stdin)){
          printf("Enter the name\n? ");
          
          fprintf(ptr,"%s\n",name);
          gets(name);

        }
        fclose(ptr);
        break;
      }
      case 2:{
        ptr=fopen("names.txt","r");
        fscanf(ptr,"%30s",name);
        while(!feof(ptr)){
          printf("%s\n",name);
          //flush(ptr)
          fscanf(ptr,"%30s",name);
        }
        fclose(ptr);
        break;
      }
      case 0:{
        printf("Program is closed!");
        return 0;
      }
    }
  }
};
