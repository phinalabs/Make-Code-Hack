#/*
 * Embedded C: Data Structures - Arrays 2 Dimensional
 * @author muchirijohN
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

/*array row size*/
#define ROW 2
/*array column size*/
#define COLUMN 3

/**
 * @brief create a 2d array
 *
 */
void create_array_2d()
{
    /*initialize array*/
    int array_2d[ROW][COLUMN] = {
        {10, 20, 30},
        {40, 50, 60}};
    /*print array values*/
    for(int i= 0; i < ROW; i++){ /*<< iterate row*/
         printf("ROW %d: ", i);
        for(int j=0; j < COLUMN; j++){ /*<< iterate column*/
            printf("%d ", array_2d[i][j]);
        }
        printf("\n");
    } 
}

/**
 * @brief Main function
 */
int main(int argc, char *argv[])
{
    /*call function*/
    create_array_2d();
    /*end*/
    return 1;
}