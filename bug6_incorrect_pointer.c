#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    p = &x;
    *p = x;

    printf("%d", *p);

    return 0;
}