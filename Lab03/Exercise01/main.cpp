/* -----------------------------------------------------------------------------
 * pino-3031856-lab-03:  main.cpp
 * Name: Audrey Pino
 * Assignment: EECS-168 Lab03 Exercise01
 * Description:  This program will obtain a wind speed from the user and output what category of hurricane it is or type if it's just a tropical storm.
 * Date: 092120
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main(){
	float w;
	cout<< "Input a wind speed (m/s): ";
	cin >> w;
	if(w >= 70){
		cout<< "A wind speed of " << w << " m/s is a Category 5 hurrinace." << endl;
	}
	if((w < 70) && (w >= 58))
		cout<< "A wind speed of " << w << " m/s is a Category 4 hurricane." << endl;
	if((w < 58) && (w >= 50))
		cout<< "A wind speed of " << w << " m/s is a Category 3 hurricane." << endl;
	if((w < 50) && (w >= 43))
		cout<< "A wind speed of " << w << " m/s is a Category 2 hurricane." << endl;
	if((w < 43) && (w >= 33))
		cout<< "A wind speed of " << w << " m/s is a Category 1 hurricane." << endl;
	if((w < 33) && (w >= 18))
		cout<< "A wind speed of " << w << " m/s  is a Tropical Storm." << endl;
	if((w < 18) && (w >= 0))
		cout<< "A wind speed of " << w << " m/s  is a Tropical Depression." << endl;
	else if(w<0){
		cout<< "Negative wind? Sorry, that's invalid>" << endl;
	}
	return(0);
	}
