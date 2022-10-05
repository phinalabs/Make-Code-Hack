/*
 * Embedded C: Enum and Switch Statement
 * @author muchirijohn
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

typedef enum
{
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE
} COUNTER;


int main(int argc, char *argv[])
{

    COUNTER count = FOUR;

    switch (COUNT)
    {
    case ONE:
        printf("ONE\n");
        break;
    default:
        printf("Not Found.");
        break;
    }

    return 0;
}