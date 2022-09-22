#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint8_t func_malloc()
{
    int i = 0;

    printf("\nAllocate mem space\n");
    /*create memory space*/
    int *p = (int *)malloc(sizeof(int) * ARRAY_SIZE);
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
}
/*array size*/
#define ARRAY_SIZE 10

/*main function*/
int main(int argc, char *argv[])
{
    func_malloc();

    return 0;
}