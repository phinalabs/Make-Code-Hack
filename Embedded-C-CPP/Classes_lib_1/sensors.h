#ifndef _SENSORS_H
#define _SENSORS_H

class sensor {
	private:
		int temp;
		int hum;

	public:
		sensor(int temp, int hum);
		void setVlaues(int temp, int hum);
		int getTemp();
		int getHum();
		float tempToKelvin();
		float tempToFh();
};


#endif
