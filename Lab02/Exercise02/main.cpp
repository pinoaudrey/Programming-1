/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Executable: quadraticFormula
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab02
 * Description:  This program will solve for the roots of an equation using the quadratic formula.
 * Date: 090920
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main(){
        float a;
	float b;
	float c;
	float discriminant;
	float real;
	float imaginaryNum;
	float r1;
	float r2;
	cout<< "Input a value for a: ";
        cin >> a;
        cout<< "Input a value for b: ";
        cin >> b;
	cout<< "Input a value for c: ";
	cin >> c;
	discriminant = b*b - 4*a*c;

	if (discriminant > 0){
		r1 = (-b + sqrt(discriminant)) / (2*a);
		r2 = (-b - sqrt(discriminant)) / (2*a);
		cout << "root 1 = " << r1 << endl;
		cout << "root 2 = " << r2 << endl;
	}
	else if (discriminant == 0){
		r1 = (-b + sqrt(discriminant)) / (2*a);
		cout << "root 1 and root 2 = " << r1 << endl;
	}
	else {
		real = -b/(2*a);
		imaginaryNum =sqrt(-discriminant)/(2*a);
		cout << "root 1 = " << real << "+" << imaginaryNum << "i" << endl;
		cout << "root 2 = " << real << "-" << imaginaryNum << "i" << endl;
	}
	return (0);
}

