#include <stdio.h>

struct x{
	int i;
	char c;
};

void print(struct x y){
	printf("struct vals %d and %c\n", y.i, y.c);
}
int main(){
	
	
	struct x y;
	y.i = 30;
	y.c = 'A';
	
	print(y);
	
	return 0;
}
