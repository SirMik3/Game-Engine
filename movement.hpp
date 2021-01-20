#include <math.h>
#include <iostream>
using namespace std;

int movement(string str, int speed, int time, int pos, int angle)
{ 

	int dx = 0;
	int dy = 0;
	int dz = 0;
if (str == "x"){
	dx = (double) (cos(angle) * speed) / time;
} else if (str == "y") {
	dy = (double) (sin(angle) * speed) / time;
} else {
	dz = (double) (tan(angle) * speed) / time;
}

	if (str == "x"){
		pos += dx;
	} else if (str == "y") {
		pos += dy;
	} else {
		pos += dz;
	}

	return pos;
}



