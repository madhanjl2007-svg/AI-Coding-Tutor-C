#include <stdio.h>

int main() {
    int choice = 1;

    switch (choice) {
        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;
        default:
            printf("Invalid choice");
            break;
    }      

    return 0;
}