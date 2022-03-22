/* -----------------------------------------------------------------------------
 * pino-3031856-lab-10:  Circle.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab10
 * Description:  This program defines the member methods of the Circle class.
 * Date: 111720
 *
 ---------------------------------------------------------------------------- */

#include "Circle.h"
#include "math.h"

double Circle::diameter(){
	double diameter = 2*radius;
	return(diameter);
}

double Circle::area(){
	double area = M_PI*pow(radius,2);
	return(area);
}

double Circle::circumference(){
	double circumference = 2*(M_PI)*(radius);
	return(circumference);
}

double Circle::distanceToOrigin(){
	double distance = sqrt(pow(xPos,2)+pow(yPos,2));
	return(distance);
}

bool Circle::intersect(Circle otherCircle){

	float totalRadius = ((xPos - otherCircle.xPos)*(xPos-otherCircle.xPos))+((yPos - otherCircle.yPos)*(yPos - otherCircle.yPos));
	if (((radius - otherCircle.radius)*(radius - otherCircle.radius)) >= totalRadius)
		return false;
	return((radius - otherCircle.radius)*(radius - otherCircle.radius)) <= totalRadius;
}
