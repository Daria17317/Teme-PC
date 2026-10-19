#include <stdio.h>

int main(void) {
    int a,b,c,d,rez1, rez2;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    printf("%d %d %d %d\n" ,a,b,c,d);
    rez1=a/b;
    rez2=c/d;
    ((double)a/b>(double)c/d)? printf("rez1=%d", rez1) : printf("rez2=%d", rez2);
    return 0;
}
///L3 pb 3.11
