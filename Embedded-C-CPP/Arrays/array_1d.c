/*
 * Embedded C: Malloc
 * @author muchirijohN
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <String.h>
#include <time.h>

#define ARRAY_LEN 4
/**
 * @brief Create a 1d array 1
 * using a compile time constant
 */
void create_1d_array_1()
{
    /*create and initialize array*/
    int array[ARRAY_LEN] = {10, 20, 30, 40};
    /*print array values*/
    for (int i = 0; i < ARRAY_LEN; i++) printf("%d ", array[i]);
}

/**
 * @brief Create a 1d array 2
 *  using a local constant
 */
void create_1d_array_2()
{
    /*array length*/
    const uint8_t array_length = 4;
    /*create array*/
    int array[array_length];
    /*optional - init array using memset*/
    memset(array, 0,  sizeof(array_length) * array_length);
    /*seed the random generator with time*/
    srand(time(NULL));
    /*set array values with random numbers*/
    for (int i = 0; i < array_length; i++) array[i] = rand();
    /*print array values*/
    for (int i = 0; i < array_length; i++) printf("%d ", array[i]);
}


int main(int argc, char *argv[])
{
    printf("\nArray using compile time constant\n");
    create_1d_array_1();
    
    printf("\nArray using local constant\n");
    create_1d_array_2();
    /*end*/
    return 0;
}