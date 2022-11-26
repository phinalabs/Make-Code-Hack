/*
 * Embedded C: Union
 * @author muchirijohN
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*union*/
typedef union
{
	uint16_t sensor_reading_16bit;
	struct
	{
		uint8_t LSB;
		uint8_t MSB;
	} REGISTER;
} union_16bit_; 

/**
 * @brief use union to convert LSB and MSB to 16 bit value
 */
void convert_using_union()
{
	union_16bit_ union_16bit;
	printf("Embedded C - Unions: Converting LSB and MSB to 16 Bit Values\n\n");

	/* set 16bit value.
	 * print LSB and MSB values
	 */
	union_16bit.sensor_reading_16bit = 2045;
	printf("\n--- Using Union ---\n");
	printf("Get the LSB and MSB of %d\n", union_16bit.sensor_reading_16bit);
	printf("LSB : 0x%02X, MSB : 0x%02X\n", union_16bit.REGISTER.LSB, union_16bit.REGISTER.MSB);

	/* set LSB and MSB values
	 * print 16 bit value
	 */
	union_16bit.REGISTER.LSB = 0xCB;
	union_16bit.REGISTER.MSB = 0x0B;
	printf("\nConvert LSB:0x%02X and MSB:0x%02X to 16 Bit Value\n", union_16bit.REGISTER.LSB, union_16bit.REGISTER.MSB);
	printf("16 Bit Value : 0x%04X -> %d\n", union_16bit.sensor_reading_16bit, union_16bit.sensor_reading_16bit);
}

int main(int argc, char *argv[])
{
	/*using union*/
	convert_using_union();

	return 0;
}