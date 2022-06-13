#include <stdio.h>
#include <stdint.h>

int main() {
	//declare variables
	int num1;
	int num2;
	char op;

	int ans = 0;
	//enter number 1
	printf("Enter Num 1:");
	scanf("%d", &num1);
	// enter number 2
	printf("Enter Num 2:");
	scanf("%d", &num2);
	//enter operation
	scanf("%c", &op);
	printf("Operation: ");
	scanf("%c", &op);
	printf("\n------------\n");
	printf("N1: %d, N2: %d, OP: %c\n", num1, num2, op);
	//addition
	switch (op) {
		case 'A':
			ans = num1 + num2;
			break;
		case 'B':
			ans = num1 * num2;
			break;
		case 'C':
			ans = num1 / num2;
			break;
		case 'D':
			ans = num1 - num2;
			break;
		default:
			printf("Invalid operation");
			return 0; //terminate
	};
	//print ans
	printf("Ans : %d", ans);

	return 0;
}
