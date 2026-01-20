#include <stdio.h>
#include "mainLoop.h"

/* four pertinent header files */
#include "menu.h"
#include "fileio.h"
#include "calculations.h"

/*
 * Option selector: routes the selected option to the correct function.
 * Matches the user story for integrating with the menu and separate files.
 */
void mainLoop(int option)
{
    switch (option) {
        case 1:
            firstCalculation(10, 5);     /* example inputs */
            break;
        case 2:
            secondCalculation(10, 5);    /* example inputs */
            break;
        case 3:
            writeFile();
            break;
        case 4:
            readFile();
            break;
        case 5:
            printf("Exiting program...\n");
            break;
        default:
            printf("Unknown option.\n");
            break;
    }
}
