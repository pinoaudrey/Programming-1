/* -----------------------------------------------------------------------------
 * pino-3031856-lab-10:  CircleDriver.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab10
 * Description:  This program defines the member methods of the CircleDriver class.
 * Date: 111720
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include "CircleDriver.h"
#include "math.h"
using namespace std;

void CircleDriver::obtainCircles(){

	//CIRCLE 1 INUPUT
        cout << "Enter information for Circle 1:" << endl;
        cout << "Radius: ";
	cin >> circ1.radius;
        cout << "X Position: ";
	cin >> circ1.xPos;
	cout << "Y Position: ";
	cin >> circ1.yPos;
	cout<<endl;

	if(circ1.radius <= 0){
	cout << "Please enter a Radius for Circle 1 that is greater than 0: ";
        cin >> circ1.radius;
	}

         //CIRCLE 2 INPUT
	 cout << "Enter information for Circle 2;" << endl;
	 cout << "Radius: ";
	 cin >> circ2.radius;
	 cout << "X Position: ";
	 cin >> circ2.xPos;
	 cout << "Y Position: ";
	 cin >> circ2.yPos;
	 cout<<endl;

	 if(circ2.radius <= 0){
		 cout << "Please enter a Radius for Circle 2 that is greater than 0: ";
		 cin >> circ2.radius;
	 }
}
	 void CircleDriver::printCircleInfo(){

	//CIRCLE 1
	cout << "Information for Circle 1:" << endl;
	cout << "location: (" << circ1.xPos << "," << circ1.yPos << ")" << endl;
	cout << "diameter: " << circ1.diameter() << endl;
	cout << "area: " << circ1.area() << endl;
	cout << "circumference: " << circ1.circumference() << endl;
	cout << "distance from the origin: " << circ1.distanceToOrigin(); 
	cout << endl << endl;

        //CIRCLE 2
	cout << "Information for Circle 2:" << endl;
	cout << "location: ("<< circ2.xPos << "," << circ2.yPos << ")" << endl;
	cout << "diameter: " << circ2.diameter() << endl;
	cout << "area: " << circ2.area() << endl;
	cout << "circumference: " << circ2.circumference() << endl;
	cout << "distance from the origin: " << circ2.distanceToOrigin();
	cout << endl << endl;

        //INTERSECTION
	if(circ1.intersect(circ2) == true){
		cout << "The circles intersect." << endl;
	}
	else{
		cout << "The circles do not intersect." << endl;
	}
	cout << endl;
}

void CircleDriver::run(){
	obtainCircles();
	printCircleInfo();
}
