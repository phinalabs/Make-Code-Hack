#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*array size*/
#define ARRAY_SIZE 10

/*function- test malloc*/
uint8_t func_malloc()
{
    uint8_t i = 0;
    printf("\nAllocate mem space\n");
    /*create memory space*/
    uint8_t *p = (uint8_t *)malloc(sizeof(uint8_t) * ARRAY_SIZE);
    /*check if an error occured*/
    if(p == NULL) return 0;
    /*set values */
    for (; i < 10; i++)
    {
        *(p + i) = i;
    }
    /*read values*/
    for (i = 0; i < 10; i++)
    {
        printf(" %d", *(p + i));
    }
    /*free up created memory space*/
    free(p);
    /*success*/
    return 1;
}


/*main function*/
int main(int argc, char *argv[])
{
    func_malloc();
    return 0;
}