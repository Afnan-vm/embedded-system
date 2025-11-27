#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a ^ b;  // Step 1
    b = a ^ b;  // Step 2
    a = a ^ b;  // Step 3

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}