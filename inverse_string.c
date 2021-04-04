#include <stdio.h>
int strlen(char *str);
void srev(char *str);

int main(void) {
  char sentence[100],word[20];
  int k;
  printf("Enter sentence:");
  gets(sentence);
  for(int i=0;i<strlen(sentence);i++){
    if(sentence[i]==' '){
      word[k]='\0';
      srev(word);
      putchar(' ');
      k=0;
    }
    else{
      word[k]=sentence[i];
      k++;
    }

  }
  word[k]='\0';
  srev(word);
  return 0;
}
int strlen(char *str){
  int number=0;
  while(*str!='\0'){
    number++;
    str++;
  }
  return number;
}
void srev(char *str){
  int len=strlen(str);
  for(int i=len-1;i>=0;i--){
    printf("%c",str[i]);
  }
}
