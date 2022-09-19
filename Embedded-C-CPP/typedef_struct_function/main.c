#include <stdio.h>
#include <stdlib.h>

#include "helper.h"

int main(int argc, char *argv[]) {
	int ans;
	float div;
	/*values init*/
	values_t values = {
		.x = 4,
		.y = 5
	};
	/*functions init*/
	funcs_t calcFuncs = {
		.addFunc = &calcAdd,
		.subFunc = &calcSub,
		.multiplyFunc = &calcMultiply,
		.divFunc = &calcDivision
	};
	/*std output*/
	printf("Embeedded C >> typedef + Function + struct Pointer Example\n\n");
	printf("Values: x: %d and y : %d\n\n", values.x, values.y);
	/*addition*/
	ans = calcFuncs.addFunc(&values);
	printf("Addition: %d\n", ans);
	/*substraction*/
	ans = calcFuncs.subFunc(&values);
	printf("Substraction: %d\n", ans);
	/*using coumpound literals*/
	values= (values_t){
		.x = 10,
		.y = 20
	};
	printf("\nValues: x: %d and y : %d\n\n", values.x, values.y);
	/*multiply*/
	ans = calcFuncs.multiplyFunc(&values);
	printf("Multiply: %d\n", ans);
	/*division*/
	div = calcFuncs.divFunc(&values);
	printf("Divide: %.2f\n", div);
	
	return 0;
}
