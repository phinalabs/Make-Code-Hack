/**
 * class basics
 */
#include <stdio.h>

class sensor {
	public:
		int width;
		int height;
		int area(){
			return width * height;
		}
};


int main() {
	int area;
	sensor x;
	x.width = 20;
	x.height = 5;
	
	area = x.area();
	
	printf("%d", area);
}
