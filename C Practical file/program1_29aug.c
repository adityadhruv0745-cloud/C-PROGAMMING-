#include <stdio.h>

int main() {
    char name[50];
    int age;
    char address[100];

    // Taking input
    printf("Enter your name: ");
    scanf("%49s", name);  
    printf("Enter your age: ");     
    scanf("%d", &age);

    printf("Enter your address: ");
    scanf("%s", address);  

    
    printf("\n--- Your Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);

    return 0;
}
