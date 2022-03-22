/* -----------------------------------------------------------------------------
 * File Name:   main.cpp
 * Executable: ASCII
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab02
 * Description:  This program will cast a character to an int.
 * Date: 090920
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
using namespace std;
	int main(){
	char i;
	cout<< "Input a character: ";
	cin >> i;
	cout<< "The ASCII value for " << "'i'" << " is: " << int(i) << endl;
	cout<< "goodbye!" << endl;
	return(0);
	}
