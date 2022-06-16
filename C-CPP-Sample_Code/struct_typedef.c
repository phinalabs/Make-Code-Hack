#include <stdio.h>

int main(){
	typedef struct{
		int i;
		char c;
	}x;
	
	x y;
	y.i = 30;
	y.c = 'A';
	
	printf("struct vals %d and %c\n", y.i, y.c);
	
	return 0;
}
