#include <stdio.h>

//function pointer
typedef int (calcFunc)(int *v1, int *v2);

int calcFuncCaller(calcFunc *p, int *v1, int *v2) {
	return (p(v1, v2));
}
//addition
int calcAdd(int *v1,  int *v2) {
	return *v1 + *v2;
}
//substraction
int calcSub(int *v1,  int *v2) {
	return *v1 - *v2;
}
//multiply
int calcMultiply(int *v1,  int *v2) {
	return *v1 * *v2;
}
//main
int main(int argc, char** argv) {
	int values[2]= {4, 5};
	printf("Embeedded C >> Function Pointer Example\n\n");
	//addition
	int ans = calcFuncCaller(&calcAdd, &values[0], &values[1]);
	printf("Addition: %d\n", ans);
	//substraction
	ans = calcFuncCaller(&calcSub, &values[0], &values[1]);
	printf("Substraction: %d\n", ans);
	//multiply
	ans = calcFuncCaller(&calcMultiply, &values[0], &values[1]);
	printf("Multiply: %d\n", ans);
	
	return 0;
}
