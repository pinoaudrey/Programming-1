//CIRCLEDRIVER.H FILE

#include "Circle.h"
#ifndef CIRCLEDRIVER_H
#define CIRCLEDRIVER_H

class CircleDriver{

	public:
		Circle circ1;
		Circle circ2;
		void obtainCircles();
		void printCircleInfo();
		void run();
};
#endif
