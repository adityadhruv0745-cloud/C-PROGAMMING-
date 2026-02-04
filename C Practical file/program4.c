#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fact = 1; // factorial can be large

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}
