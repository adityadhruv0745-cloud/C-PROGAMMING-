#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;

    int characters = 0, spaces = 0, tabs = 0, lines = 0;

    // Ask user for file name
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            lines++;
    }

    fclose(fp);

    // Display results
    printf("\n--- File Statistics ---\n");
    printf("Total Characters : %d\n", characters);
    printf("Spaces           : %d\n", spaces);
    printf("Tabs             : %d\n", tabs);
    printf("Lines            : %d\n", lines);

    return 0;
}