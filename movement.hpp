#include <math.h>
#include <iostream>
using namespace std;

int movement(string str, double speed, double time, double pos, double angle, double jumptime)
{ 

	double dx = 0;
	double dy = 0;
	double dz = 0;
	double gravity = 9.8 * jumptime;
if (str == "x"){
	dx = (double) (cos(angle) * speed) / time;
} else if (str == "y") {
	dy = (double) (sin(angle) * speed) / time;
} else {
	dz = ((double) (tan(angle) * speed) / time) - gravity;
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



