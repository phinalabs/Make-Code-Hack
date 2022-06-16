#include <stdio.h>

int main(){
	struct x{
		int i;
		char c;
	};
	
	struct x y;
	y.i = 30;
	y.c = 'A';
	
	printf("struct vals %d and %c\n", y.i, y.c);
	
	return 0;
}
