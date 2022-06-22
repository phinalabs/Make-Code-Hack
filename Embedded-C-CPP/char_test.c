#include <stdio.h>

int main() {
	unsigned char x = 0;
	for (x = 0; x <= 255; x++) {
		printf("%d\n", x);
		if(x == 255)
			break;
	}
	return 0;
}
