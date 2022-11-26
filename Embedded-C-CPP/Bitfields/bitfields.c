/*
 * Embedded C: Bitfields and Structs
 * @author muchirijohn
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct
{
    uint8_t temp;
    uint8_t humidity;
    uint8_t luminance;
    uint8_t fan_speed;
} _no_bitfields;

typedef struct
{
    uint8_t temp : 8;
    uint8_t humidity : 8;
    uint8_t luminance: 8;
    uint8_t fan_speed:8;
} _with_bitfields;

void struct_no_bitfields()
{
    _no_bitfields bitfields = {
        .temp = 32,
        .humidity = 50,
        .luminance = 46,
        .fan_speed = 60
    };
    printf("Size of struct : %u bytes\n", sizeof(_no_bitfields));
    printf("Temp: %d, Humidity : %d\n", bitfields.temp, bitfields.humidity);
    printf("Luminance: %d, Fan On : %d\n", bitfields.luminance, bitfields.fan_speed);
}

void struct_and_bitfields()
{
    _with_bitfields bitfields = {
        .temp = 32,
        .humidity = 50,
        .luminance = 46,
        .fan_speed = 60
    };
    printf("\nSize of struct : %u bytes\n", sizeof(_with_bitfields));
    printf("Temp: %d, Humidity : %d\n", bitfields.temp, bitfields.humidity);
    printf("Luminance: %d, Fan On : %d\n", bitfields.luminance, bitfields.fan_speed);
} 

/*main*/
int main(int argc, char *argv[])
{
    struct_no_bitfields();
    struct_and_bitfields();
    return 0;
}