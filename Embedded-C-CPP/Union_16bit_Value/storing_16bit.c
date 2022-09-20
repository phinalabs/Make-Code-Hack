/*
 * @author muchirijohn
 * https://github.com/phinalabs/Make-Code-Hack/tree/main/Embedded-C-CPP
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*union*/
typedef union{
	uint16_t conv_value;
	struct{
		uint8_t lsb;
		uint8_t msb;
	}values;
}union_16bit_;

int main(int argc, char *argv[]) {
	
	union_16bit_ union_16bit;
	printf("Embedded C - Unions: Converting LSB and MSB to 16 Bit Values\n\n");
	/*set 16bit value*/
	union_16bit.conv_value = 2045;
	printf("Get the LSB and MSB of %d\n", union_16bit.conv_value );
	printf("LSB : 0x%02X, MSB : 0x%02X\n", union_16bit.values.lsb, union_16bit.values.msb);
	/*set lsb and msb values*/
	union_16bit.values.lsb = 0xCB;
	union_16bit.values.msb = 0x0B;
	printf("\nConvert LSB:0x%02X and MSB:0x%02X to 16 Bit Value\n", union_16bit.values.lsb, union_16bit.values.msb);
	printf("16 Bit Value : 0x%04X -> %d\n", union_16bit.conv_value, union_16bit.conv_value);
	
	return 0;
}