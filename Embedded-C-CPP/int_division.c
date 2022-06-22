#include <stdio.h>

int main() {
	unsigned char x = 1;
	for (x = 0; x <= 100; x++) {
		if(x % 2 == 0)
		printf("%d\n", x);
	}
	return 0;
}
