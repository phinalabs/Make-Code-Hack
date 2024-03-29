/*
 * Embedded C: Data Structures - Arrays 1 Dimensional
 * @author muchirijohn
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <String.h>
#include <time.h>

/*array length*/
#define ARRAY_SIZE 4

/**
 * @brief Create a 1d array 1
 * using a compile time constant
 */
void create_1d_array_1()
{
    /*create and initialize array*/
    int array[ARRAY_SIZE] = {10, 20, 30, 40};
    /*print array values*/
    for (int i = 0; i < ARRAY_SIZE; i++) printf("%d ", array[i]);
}

/**
 * @brief Create a 1d array 2
 *  using a runtime-bound array
 */
void create_1d_array_2()
{
    /*array length*/
    const int ARRAY_LENGTH = 4;
    /*create array*/
    int array[ARRAY_LENGTH];
    /*optional - init array using memset*/
    //memset(array, 0, sizeof(*array) * ARRAY_LENGTH);
    memset(array, 0, sizeof(array));
    /*seed the random generator with time*/
    srand(time(NULL));
    /*set array values with random numbers*/
    for (int i = 0; i < ARRAY_LENGTH; i++) array[i] = rand();
    /*print array values*/
    for (int i = 0; i < ARRAY_LENGTH; i++) printf("%d ", array[i]);
}

int main(int argc, char *argv[])
{
    printf("Embedded C: Arrays 1d\n");
    printf("\ncreate array  using compile time constant\n");
    create_1d_array_1();

    printf("\ncreate runtime-bound array\n");
    create_1d_array_2();
    /*end*/
    return 0;
}