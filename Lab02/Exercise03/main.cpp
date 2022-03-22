/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Executable: FahrenheitCelsius
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab02
 * Description:  This program will convert the temperature in Fahrenheit to the temperature in Celsius.
 * Date: 090920
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main(){
	float f;
	float c;
	cout<< "Input temperature in Fahrenheit: ";
	cin >> f;
	c = (f-32.0)*(5.0 / 9.0);
	cout<< fixed<< setprecision(2);
	cout<< "The temperature is " << c << " degrees Celsius." << endl;
}
