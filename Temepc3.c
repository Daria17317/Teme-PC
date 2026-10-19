#include <stdio.h>

int main(void) {
    int n;
    printf("nr de elemente:");
    if (scanf("%d", &n)!=1 || n<=0) {
        printf("Nr invalid de elemente");
    return 1;}

    double v[n];
    for (int i=0;i<n;i++) {
        printf("v[%d] = ", i + 1);
        scanf("%lf", &v[i]);
    }
    double min=v[0];
    double max=v[0];
    int poz_min=1;
    int poz_max=1;
    for (int i=0;i<n;i++) {
        if (v[i]<min){ min=v[i]; poz_min=i+1;}
        if (v[i]>max) {max=v[i]; poz_max=i+1;}

    }
printf("Valoarea minima:%.2lf la pozitia %d\n", min, poz_min);
    printf("Valoarea maxima:%.2lf la pozitia %d\n", max, poz_max);


    return 0;
}
///L3 pb 3.3
