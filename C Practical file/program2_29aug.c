 #include <stdio.h>

int main() {
    int a, b;
    
    // Taking input from the user
    printf("Enter first integer: ");
    scanf("%d", &a);
    
    printf("Enter second integer: ");
    scanf("%d", &b);
    
    // Performing operations
    printf("Results of Arithmetic Operations:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    
    if (b != 0) {  // Check for division by zero
        printf("Division: %d / %d = %d\n", a, b, a / b);
        printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and Modulus not possible (denominator is 0)\n");
    }
    
    return 0;
}
