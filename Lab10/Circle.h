//Circle.h file

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
public:
	
double radius;
double xPos;
double yPos;

double diameter();
double area();
double circumference();
double distanceToOrigin();
bool intersect(Circle otherCircle);
};
#endif
