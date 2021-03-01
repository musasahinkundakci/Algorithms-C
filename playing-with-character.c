#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()  
{
    char ch,s[20],sen[100];
    scanf("%c\n",&ch);
    scanf("%[^\n]%*c",s);
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
