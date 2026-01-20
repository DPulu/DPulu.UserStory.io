#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

/*
 * Displays a menu with five options and returns the selected option as an int.
 * Screen "clear" is simulated by printing several blank lines (portable).
 */
int menu(void)
{
    int option = 0;

    /* Clear screen in a simple, portable way */
    for (int i = 0; i < 40; ++i) {
        printf("\n");
    }

    printf("===== MAIN MENU =====\n");
    printf("1) First Calculation\n");
    printf("2) Second Calculation\n");
    printf("3) Write data to file\n");
    printf("4) Read data from file\n");
    printf("5) Exit\n");
    printf("=====================\n");
    printf("Enter your choice (1-5): ");

    while (scanf("%d", &option) != 1 || option < 1 || option > 5) {
        int ch;
        printf("Invalid input. Please enter a number from 1 to 5: ");
        while ((ch = getchar()) != '\n' && ch != EOF) {
            /* clear input buffer */
        }
    }

    return option;
}
