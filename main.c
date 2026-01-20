#include <stdio.h>

/* standard headers + two pertinent headers */
#include "menu.h"
#include "mainLoop.h"

/*
 * Main Integration Function
 * - named main
 * - returns int
 * - receives option from menu()
 * - loops mainLoop() until exit is chosen
 */
int main(void)
{
    int option = 0;

    do {
        option = menu();
        mainLoop(option);
    } while (option != 5);  /* 5 = Exit option */

    return 0;
}
