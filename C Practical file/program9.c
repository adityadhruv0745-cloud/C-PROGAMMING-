#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

// Function to calculate average marks
float calculateAverage(struct Student s[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += s[i].marks;
    }
    return sum / n;
}

int main() {
    struct Student s[5];
    int i;

    // Accept data
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display data
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    // Calculate and display average
    float avg = calculateAverage(s, 5);
    printf("\nAverage Marks of 5 Students = %.2f\n", avg);

    return 0;
}