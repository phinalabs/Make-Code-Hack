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
	uint16_t conversion_16bit_value;
	struct
	{
		uint8_t LSB;
		uint8_t MSB;
	} values;
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
	union_16bit.conversion_16bit_value = 2045;
	printf("\n--- Using Union ---\n");
	printf("Get the LSB and MSB of %d\n", union_16bit.conversion_16bit_value);
	printf("LSB : 0x%02X, MSB : 0x%02X\n", union_16bit.values.LSB, union_16bit.values.MSB);

	/* set LSB and MSB values
	 * print 16 bit value
	 */
	union_16bit.values.LSB = 0xCB;
	union_16bit.values.MSB = 0x0B;
	printf("\nConvert LSB:0x%02X and MSB:0x%02X to 16 Bit Value\n", union_16bit.values.LSB, union_16bit.values.MSB);
	printf("16 Bit Value : 0x%04X -> %d\n", union_16bit.conversion_16bit_value, union_16bit.conversion_16bit_value);
}

/**
 * @brief convert using bit shifting
 */
void convert_using_bit_shifting()
{
	uint16_t conversion_16bit_value = 2045;
	uint8_t LSB = 0;
	uint8_t MSB = 0;

	//conversion_16bit_value = LSB | (uint16_t)MSB >> 8;
	LSB = conversion_16bit_value & 0xFF;
	MSB = (conversion_16bit_value >>  8 ) & 0xFF;
	printf("\n--- Using Bit Shifting ---\n");
	printf("Get the LSB and MSB of %d\n", conversion_16bit_value);
	printf("LSB : 0x%02X, MSB : 0x%02X\n", LSB, MSB);

	LSB = 0xCB;
	MSB = 0x0B;
	conversion_16bit_value = (LSB | (uint16_t)MSB << 8) & 0xFFFF;
	printf("\nConvert LSB:0x%02X and MSB:0x%02X to 16 Bit Value\n", LSB, MSB);
	printf("16 Bit Value : 0x%04X -> %d\n", conversion_16bit_value, conversion_16bit_value);
}

int main(int argc, char *argv[])
{
	/*using union*/
	convert_using_union();

	/*using bit shifting*/
	convert_using_bit_shifting();

	return 0;
}