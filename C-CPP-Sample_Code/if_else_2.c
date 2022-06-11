#include <stdio.h>

int main() {
	int stock;
	while (1) {
		//enter number 1
		printf("\nEnter Stock:");
		scanf("%d", &stock);
		printf("Stock : %dV\n", stock);
		stock = (int)stock;
		//out of stock
		if (stock  == 0) printf("OUT OF STOCK");
		//low stock
		else if (stock  > 0 && stock < 50)  printf("LOW STOCK");
		//in stock
		else if (stock  >= 50 && stock <= 100) printf("IN STOCK");
		//invalid
		else printf("Invalid operation");
	}
	return 0;
}
