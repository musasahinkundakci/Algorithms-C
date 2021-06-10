#include <stdio.h>
#include <stdlib.h>
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
      case 3:{
        int a;
        fileptr=fopen("database.dat","rb+");
        printf("Which id\n?");scanf("%d",&a);
        fseek(fileptr,sizeof(Student)*a,SEEK_SET);
        Student *s;
        s=malloc(sizeof(Student));
        s->id=a;
        fwrite(s,sizeof(Student),1,fileptr);
        free(s);
        fclose(fileptr);
        printf("Student is deleted!");
      }

    }
  }
  return 0;
}
