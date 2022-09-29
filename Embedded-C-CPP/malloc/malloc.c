/*
 * Embedded C: Malloc
 * @author muchirijohN
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

/*array size*/
#define ARRAY_SIZE 10

/*flags*/
enum
{
    SUCCESS = 0,
    FAIL = 1
};

/* function- test malloc*/
bool create_array_with_malloc()
{
    // int i = 0;
    int *array;

    printf("Embedded C - Malloc\n");
    /*create memory space and get the poi nter*/
    array = (int *)malloc(sizeof(*array) * ARRAY_SIZE);
    /*check if an error occured - request failed*/
    if (array == NULL)
    {
        return true;
    }
    /*set values*/
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = i;
    }
    /*print values*/
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d", array[i]);
    }
    /*free up created memory space*/
    free(array);
    /*end*/
    return false;
}

/*main function*/
int main(int argc, char *argv[])
{
    bool status_flag;
    /*check function execution status*/
    status_flag = create_array_with_malloc();
    /*print status*/
    if (status_flag == SUCCESS)
    {
        printf("\nExecution Successful.");
    }
    else
    {
        printf("Execution Failed.");
    }
    /*end*/
    return 0;
}