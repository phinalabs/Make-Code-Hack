#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* function- test malloc*/
uint8_t create_array_with_malloc()
{
    /*array size*/
    const uint8_t array_size = 10;
    uint8_t i = 0;
    uint8_t *array;

    printf("Embedded C - Malloc\n");
    /*create memory space and get the poi nter*/
    array = (uint8_t *)malloc(sizeof(uint8_t) * array_size);
    /*check if an error occured - request failed*/
    if (array == NULL)
        return 0;
    /*set values*/
    for (; i < array_size; i++)
    {
        *(array + i) = i;
    }
    /*print values*/
    for (i = 0; i < array_size; i++)
    {
        printf(" %d", *(array + i));
    }
    /*free up created memory space*/
    free(array);
    /*success*/
    return 1;
}

/*main function*/
int main(int argc, char *argv[])
{
    create_array_with_malloc();
    return 0;
}