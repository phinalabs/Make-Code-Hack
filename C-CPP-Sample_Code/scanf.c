#include <stdio.h>
#include <stdint.h>

int main() {
	uint16_t x = 0;
	uint16_t y = 0;
	uint8_t byte1 = 0;
	uint8_t byte2 = 0;
	char name[20];
	//enter name
	printf("Enter your name : ");
	scanf("%s", &name);
	printf("%20c\n\tname\n%20c", '-', name, '-');
	
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
	printf("Encoded values: %#02x, %#02x\n", byte1, byte2);
	//reconstruct int from bytes
	y = ((int)byte2 << 8) | byte1;
	//print decoded value
	printf("Decoded value : %d" , y);
	//return
	return 0;
}
