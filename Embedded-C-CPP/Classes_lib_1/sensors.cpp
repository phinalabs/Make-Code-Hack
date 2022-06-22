#include "sensors.h"

sensor::sensor(int t, int h) {
	temp = t;
	hum = h;
}

/**
 * @brief return temperature set
 * @return int
 */
int sensor::getTemp() {
	return temp;
}

/**
 * @brief return humidity set
 * @return int
 */
int sensor::getHum() {
	return hum;
}

/**
 * @brief convert temp to kelvin
 * @return float
 */
float sensor::tempToKelvin() {
	return temp + 273.5;
}


/**
 * @brief temp celcius to fahrenheit
 * @return float
 */
float sensor::tempToFh() {
	float fh = (temp * 9 / 5) + 32;
	return fh;
}
