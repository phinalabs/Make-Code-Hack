#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static char int_to_ascii_hex(uint8_t val)
{
    return val < 10 ? (char)val + '0' : (char)(val - 10) + 'A';
}

int main(int argc, char *argv[])
{
    char hex[2] = {0};
    hex[1] = int_to_ascii_hex((16 >> 4) & 0xf);
    hex[1] = int_to_ascii_hex(16 & 0xf);
    printf("\n%c%c\n", hex[1], hex[2]);
    return 0;
}