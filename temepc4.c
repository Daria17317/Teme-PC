#include <stdio.h>

int main(void) {
    int n;
    printf("nr de elemente");
    if (scanf("%d",&n)!=1 || n<=0) {
        printf("nr invalid de elemennte");
        return 1
    }
    int v[n],i;
    for (i=0;i<n;i++) {
        printf("v[%d]",i+1);
        scanf("%d",&v[i]);
    }
    int lungime_curenta=1, lungime_max=1;

    return 0;
}
/// L4 pb 3.13
