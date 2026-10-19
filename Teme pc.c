#include <stdio.h>
#include <math.h>

int main() {
    int z, y, x;
    scanf("%d %d", &y, &x);
    printf(" y=%d x=%d\n", y, x);
    z = (int)pow(x, y);
    printf(" z=%d\n", z);

    return 0;
}
/// L3 pb 3.2
