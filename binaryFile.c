#include <stdio.h>

int main(void) {
  typedef struct Student{
    int id;
    char name[20];
  }Student;
  FILE *fileptr;
  Student temp;
  int choice;
  while(1){
    printf("1-Insert,2-Display,3-Delete\n?");
    scanf("%d",&choice);
    switch(choice){
      case 1:{
        fileptr=fopen("database.dat","rb+");
        printf("Id:");scanf("%d",&temp.id);
        printf("Name:");scanf("%s",temp.name);
        fseek(fileptr,temp.id*sizeof(Student),SEEK_SET);
        fwrite(&temp,sizeof(Student),1,fileptr);
        fclose(fileptr);
        break;
      }
      case 2:{
        fileptr=fopen("database.dat","rb");
        fread(&temp,sizeof(Student),1,fileptr);
        while(!feof(fileptr)){
          printf("%d -> %s\n",temp.id,temp.name);
          fread(&temp,sizeof(Student),1,fileptr);
        }
        fclose(fileptr);
        break;
      }

    }
  }
  return 0;
}
