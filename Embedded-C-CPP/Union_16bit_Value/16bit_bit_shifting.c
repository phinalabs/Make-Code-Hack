/*
 * Embedded C: Union
 * @author muchirijohN
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * @brief convert using bit shifting
 */
void convert_using_bit_shifting()
{
	uint16_t sensor_reading_16bit = 2045;
	uint8_t LSB = 0;
	uint8_t MSB = 0;

	//sensor_reading_16bit = LSB | (uint16_t)MSB >> 8;
	LSB = sensor_reading_16bit & 0xFF;
	MSB = (sensor_reading_16bit >>  8 ) & 0xFF;
	printf("\n--- Using Bit Shifting ---\n");
	printf("Get the LSB and MSB of %d\n", sensor_reading_16bit);
	printf("LSB : 0x%02X, MSB : 0x%02X\n", LSB, MSB);

	LSB = 0xCB;
	MSB = 0x0B;
	sensor_reading_16bit = (LSB | (uint16_t)MSB << 8) & 0xFFFF;
	printf("\nConvert LSB:0x%02X and MSB:0x%02X to 16 Bit Value\n", LSB, MSB);
	printf("16 Bit Value : 0x%04X -> %d\n", sensor_reading_16bit, sensor_reading_16bit);
}

int main(int argc, char *argv[])
{
	/*using bit shifting*/
	convert_using_bit_shifting();

	return 0;
}