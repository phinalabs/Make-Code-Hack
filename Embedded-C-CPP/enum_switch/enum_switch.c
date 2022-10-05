/*
 * Embedded C: Enum and Switch Statement
 * @author muchirijohn
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

typedef enum {
    NEG_INF,
    ZERO,
    POS_INF,
    NOT_SPECIAL

} extrema;

int main(int argc, char *argv[]){

    extrema check = POS_INF;

    switch(check){
        case NEG_INF: printf("neg inf"); return 1;
        case ZERO: printf("zero"); return 2;
        case POS_INF: printf("pos inf"); return 3;
        default: printf("not special"); break;
    }

    return 0;

}