#include <stdio.h>

int main() {
	int num1;

	//enter number 1
	printf("Enter Stock:");
	scanf("%d", &num1);

	//out of stock
	if (num1  == 0) printf("OUT OF STOCK");
	//low stock
	else if (num1  > 0 && num1 < 50)  printf("LOW STOCK");
	//in stock
	else if (num1  >= 50 && num1 <= 100) printf("IN STOCK");
	//invalid
	else printf("Invalid operation");

	return 0;
}
