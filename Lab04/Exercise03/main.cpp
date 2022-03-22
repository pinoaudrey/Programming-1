/* -----------------------------------------------------------------------------
 * pino-3031856-lab-02:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab04
 * Description:  This program will output the amount of people with the flu on the day selected by the user..
 * Date: 092920
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include<math.h>
using namespace std;
int main(){
int d1=1;
int d2=5;
int d3=17;
int numDays;
int infected;

cout << "OUTBREAK" << endl;
cout << "What day would you like a sick count for?: ";
cin >> numDays;

if (numDays <= 0)
{
	cout << "invalid day.";
}
else if (numDays == 1)
{
	cout << "Total people with the flu: " << d1;
}
else if (numDays == 2)
{
	cout << "Total people with the flu: " << d2;
}
else if (numDays == 3)
{
	cout << "Total people with the flu: " << d3;
}
else
{
	for (int i = 4; i <= numDays; i++)
	{
		infected = d1 + d2 + d3;
		d1 = d2;
		d2 = d3;
		d3 = infected;
	}
cout << "Total people with the flu: " << infected;
}
cout << endl;

return(0);
}
