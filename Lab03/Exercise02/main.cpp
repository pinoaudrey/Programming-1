/* -----------------------------------------------------------------------------
 * pino-3031856-lab-03:  main.cpp
 * Name: Audrey Pino
 * Assignment: EECS-168 Lab03 Exercise02
 * Description:  This program will obtain a numerator and a denominator from the user and output the result of long division from the user.
 * Date: 092120
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main(){
	int n;
	int d;
	int q;
	int r;
	cout<< "Enter a numerator: ";
	cin >> n;
	cout<< "Enter a denominator: ";
	cin >> d;
	cout<< fixed<< setprecision(1);
	if(d == 0){
		 cout<< "sorry, you may not divide by 0." << endl;
        }
	else{
	q = n / d;
	r = n % d;
        cout<< n << " / " << d << " = " << q << " Remainder " << r << endl;
	}
	return(0);
}
