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
void create_1d_array_1()
{
    uint8_t array[ARRAY_LEN] = {10, 20, 30, 40};
    for (int i = 0; i < ARRAY_LEN; i++) printf("%d ", array[i]);
}

void create_1d_array_2()
{
    const uint8_t array_length = 4;
    uint8_t array[array_length];
    memset(array, 0,  sizeof(array_length) * array_length);
    for (int i = 0; i < array_length; i++) printf("%d", array[i]);
}


int main(int argc, char *argv[])
{
    create_1d_array_1();
    return 0;
}