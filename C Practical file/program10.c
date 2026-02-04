#include <stdlib.h>   // needed for malloc() and free()

int main() {
    int *arr, n, i, sum = 0;

    printf("Enter how many integers you want to store: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory is allocated
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of the integers = %d\n", sum);

    // Free the allocated memory
    free(arr);

    return 0;
}