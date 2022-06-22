#include <stdio.h>
#include <stdint.h>
#include <string.h>

//include sensor class
#include "sensors.h"

int main() {
	//initialize class with temp and hum values
	sensor sense(20, 50);
	//get set temperature
	int temp = sense.getTemp();
	//get set humidity
	int hum = sense.getHum();
	//convert celcius to kelvins
	float kelv = sense.tempToKelvin();
	//convert celcius to fahrenheit
	float fh = sense.tempToFh();
	//print values
	printf("Temp : %d oC, HUM : %d RH\n", temp, hum);
	printf("Fahrenheit : %.1f, Kelvins: %.1f", fh, kelv);

	return 0;
}
