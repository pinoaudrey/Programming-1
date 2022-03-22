/* -----------------------------------------------------------------------------
 * pino-3031856-lab-02:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab04
 * Description:  This program will allow the user request the amount of Fibonacci numbers they want to see
 * Date: 092920
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
using namespace std;
int main(){
int numA, numB, numC;
int userNum;

cout << "How many Fibonacci numbers do you want printed?: ";
cin >> userNum;


if (userNum <= 0){
	cout << "You cannot enter the value " << userNum << "." << endl;
}
numA = 0;
if (userNum >= 1)
cout << numA << ", ";

	numB = 1;

if (userNum >= 2)
	cout << numB << ", ";
	

for (int i = 3; i <= userNum; i++)
		{
		numC = numA + numB;
		if(i == userNum){
		cout << numC << " ";
		}
		else{
		cout << numC << ", ";
		}
		numA = numB;
		numB = numC;
		}
		cout << endl;

return (0);
}
