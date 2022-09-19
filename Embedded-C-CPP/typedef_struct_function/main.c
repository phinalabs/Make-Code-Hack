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
	printf("Addition: %d\n", fp->addFunc(&values));
	
	/*substraction*/
	printf("Substraction: %d\n", fp->subFunc(&values));
	
	/*change values using coumpound literals*/
	values= (values_t){
		.x = 9,
		.y = 4
	};
	printf("\nValues: x: %d and y : %d\n\n", values.x, values.y);

	/*multiply*/
	printf("Multiply: %d\n", fp->multiplyFunc(&values));
	
	/*division*/
	printf("Divide: %.2f\n", fp->divFunc(&values));
	
	return 0;
}
