#include <stdio.h>

int add(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    printf("%d", add(10, 20));

    return 0;
}