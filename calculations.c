#include <stdio.h>
#include "calculations.h"

/*
 * firstCalculation: performs one kind of math operation.
 * Here: simple addition.
 */
void firstCalculation(int a, int b)
{
    int result = a + b;
    printf("First calculation (a + b): %d + %d = %d\n", a, b, result);
}

/*
 * secondCalculation: performs a different math operation from firstCalculation.
 * Here: multiplication.
 */
void secondCalculation(int a, int b)
{
    int result = a * b;
    printf("Second calculation (a * b): %d * %d = %d\n", a, b, result);
}
