#include <stdio.h>

int main() {
	int x = 0;
	int y = 0;
	unsigned char byte1 = 0;
	unsigned char byte2 = 0;
	//enter an integer value
	printf("Enter Value : ");
	scanf("%d", &x);
	//limit input to 0-65535
	if(x < 0 || x > 65353){
		printf("Value entered is incorrect, 0-65535");
		return 0;
	}
	//split the bytes
	byte1 = x & 0xFF;
	byte2 = (x >> 8) & 0xFF;
	//print upper and lower bytes
	printf("Encoded values: 0x%02X, 0x%02X\n", byte1, byte2);
	//reconstruct int from bytes
	y = ((int)byte2 << 8) | byte1;
	//print decoded value
	printf("Decoded value : %d" , y);
	//return
	return 0;
}
