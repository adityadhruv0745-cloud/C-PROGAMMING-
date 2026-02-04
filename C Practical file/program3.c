#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime numbers are greater than 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        // Check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor
                break;
            }
        }

        // Decision using if else
        if (isPrime == 1) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}
