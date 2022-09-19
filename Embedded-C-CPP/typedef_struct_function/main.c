#include <stdio.h>
#include <stdlib.h>

#include "helper.h"

int main(int argc, char *argv[]) {
	int ans;
	float div;
	
	/*values init*/
	values_t values = {
		.x = 6,
		.y = 7
	};
	/*functions init*/
	funcs_t calcFuncs = {
		.addFunc = &calcAdd,
		.subFunc = &calcSub,
		.multiplyFunc = &calcMultiply,
		.divFunc = &calcDivision
	};
	
	/*functions pointer*/
	funcs_t *fp = &calcFuncs;
	
	/*std output*/
	printf("Embedded C >> typedef + Function + struct Pointer Example\n\n");
	printf("Values: x: %d and y : %d\n\n", values.x, values.y);
	
	/*addition*/
	ans = fp->addFunc(&values);
	printf("Addition: %d\n", ans);
	
	/*substraction*/
	ans = fp->subFunc(&values);
	printf("Substraction: %d\n", ans);
	
	/*change values using coumpound literals*/
	values= (values_t){
		.x = 9,
		.y = 4
	};
	printf("\nValues: x: %d and y : %d\n\n", values.x, values.y);
	
	/*multiply*/
	ans = fp->multiplyFunc(&values);
	printf("Multiply: %d\n", ans);
	
	/*division*/
	div = fp->divFunc(&values);
	printf("Divide: %.2f\n", div);
	
	return 0;
}
