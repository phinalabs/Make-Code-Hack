#include <stdio.h>
#include <stdint.h>

int main() {
	uint16_t num1;
	uint16_t num2;
	uint16_t ans = 0;
	char op;
	
	printf("Enter Num 1: \n"); scanf("%d", num1);
	printf("Enter Num 2: \n"); scanf("%d", num2);
	printf("Operation: \n"); scanf("%c", op);
	
	if(op == 'A') ans = num1 + num2;
	if(op == 'B') ans = num1 * num2;
	if(op == 'C') ans = num1 / num2;
	if(op == 'D') ans = num1 - num2;
	else{
		printf("Invalid operation");
		return 0;
	}
	printf("Ans : %d", ans);
	
	return 0;
}
