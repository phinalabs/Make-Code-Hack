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
    FIVE,
    SIX
} COUNTER;

void enum_switch_test(COUNTER counter)
{
    /*switch statement*/
    switch (counter)
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
    case FOUR:
    case FIVE:
        printf("FOUR or FIVE");
        break;
    default:
        printf("Not Found.");
        break;
    }
}

/*main*/
int main(int argc, char *argv[])
{

    COUNTER my_count = TWO;
    enum_switch_test(my_count);

    return 0;
}