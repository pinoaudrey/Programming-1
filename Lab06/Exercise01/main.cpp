/* -----------------------------------------------------------------------------
 * pino-3031856-lab-06:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab06
 * Description:  This program will create an array of 5 doubles and calculate sum, average, min, and max for the array.
 * Date: 102120
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	double inputNum[5];
	double sum,min,max,avg;
	cout << "Please enter 5 numbers: " << endl;
	 for(int i=0;i<5;i++){
		 cout<<"Input a number into your array: ";
		 cin >> inputNum[i];
	 }
	 
//Print the 5 input numbers
	
	 cout << "Here are all the numbers in your array: " << endl;
	 for(int i=0;i<5;i++){
		 cout << inputNum[i] << endl;
	 }
	for(int i=0;i<5;i++){
//Define Minimum

	 if(min>inputNum[i])
		min = inputNum[i];

//Define Maximum

	 if(max<inputNum[i])
		max = inputNum[i];

//Define Sum

	 sum = sum + inputNum[i];
	}

//Define Average

	 avg = sum/5;

//Print Min, Max, Sum, Avg to user

	 cout << "The sum of all the values is: " << sum << endl;
	 cout << "The average of all the values is: " << avg << endl;
	 cout << "The largest value is: " << max << endl;
	 cout << "The smallest value is: " << min << endl;

return(0);
}
