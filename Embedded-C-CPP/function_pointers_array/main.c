/*
 * Embedded C: Enum, Arrays, Structs and Function Pointers
 * @author muchirijohn
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "helper.h"

int main(int argc, char *argv[]){
    int ans = 0;
    float f_ans = 0;

    /*values init*/
    values_t values = {
		.x = 6,
		.y = 7
	};

    /*array functions types and methods init*/
    funcs_t calcFuncs[3]  = {
        {.func_type = ADD, .func_caller = &funcAdd},
        {.func_type = SUBTRACT, .func_caller = &funcSub},
        {.func_type = MULTIPLY, .func_caller = &funcMultiply}
    };
    /*functions array pointer*/
	funcs_t *func_p = calcFuncs;

    /*std output*/
	printf("Embedded C >> Enum + Array + Struct + Function Pointer Example\n\n");
	printf("Values: x: %d and y : %d\n\n", values.x, values.y);
	
	/*addition*/
	ans = func_p[ADD].func_caller(&values);
	printf("Addition: %d\n", ans);

    //*substraction*/
	ans = func_p[SUBTRACT].func_caller(&values);
	printf("Substraction: %d\n", ans);
	
	/*change values using coumpound literals*/
	values= (values_t){
		.x = 12,
		.y = 5
	};
	printf("\nValues: x: %d and y : %d\n\n", values.x, values.y);

	/*multiply*/
	ans = func_p[MULTIPLY].func_caller(&values);
	printf("Multiply: %d\n", ans);

    return 0;
}