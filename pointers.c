#include <stdio.h>

void update(int *a,int *b) {
    int gecici=*a;
    *a= *a + *b;
    if(gecici - *b<0)
        *b=-(gecici-*b);
    else
        *b=gecici-*b;
    printf("%d\n%d",*a,*b);
        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}
