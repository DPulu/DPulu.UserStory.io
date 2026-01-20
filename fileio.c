#include <stdio.h>
#include "fileio.h"

/*
 * Writes some example data to a file.
 * Satisfies: name writeFile, no inputs, open/close file, handle error.
 */
void writeFile(void)
{
    FILE *fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error: could not open file for writing.\n");
        return;
    }

    fprintf(fp, "This is example data written to the file.\n");
    fprintf(fp, "You can change this to whatever your project requires.\n");

    if (fclose(fp) != 0) {
        printf("Warning: error closing the file after writing.\n");
    } else {
        printf("Data successfully written to output.txt\n");
    }
}

/*
 * Reads data from the same file and prints it to the console.
 * Uses fopen, fclose, fgetc, and loops until EOF.
 */
void readFile(void)
{
    FILE *fp = fopen("output.txt", "r");

    if (fp == NULL) {
        printf("Error: could not open file for reading.\n");
        return;
    }

    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    if (fclose(fp) != 0) {
        printf("\nWarning: error closing the file after reading.\n");
    } else {
        printf("\nFinished reading from output.txt\n");
    }
}
