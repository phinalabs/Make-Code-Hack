/*
 * Embedded C: Enum and Switch Statement
 * @author muchirijohn
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

/*enum*/
typedef enum
{
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE
} COUNTER;

/*main*/
int main(int argc, char *argv[])
{

    COUNTER count = TWO;
    /*switch statement*/
    switch (count)
    {
    case ONE:
        printf("ONE\n");
        break;
    case TWO:
        printf("TWO\n");
        break;
    case THREE:
        printf("THREE\n");
        break;
    default:
        printf("Not Found.");
        break;
    }

    return 0;
}