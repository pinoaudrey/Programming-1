/* -----------------------------------------------------------------------------
 * File Name:  main.cpp
 * Executable: soda
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab02
 * Description:  This program will take a number of sodas and then tell the user how many Fridge Cubes, Six-packs, and Single sodas it will be packaged as.
 * Date: 090920
 *
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main(){
	int soda;
	int fridgeCube;
	int sixPack;
	int single;
	int r1;
	int r2;
	cout<< "How many sodas do you have? ";
	cin >> soda;
	cout<< fixed<< setprecision(1);
	fridgeCube = soda / 24;
	r1 = soda % 24;
	sixPack = r1 / 6;
	r2 = r1 % 6;
	single = r2;
	cout<< "Fridge Cubes: " << fridgeCube << endl;
	cout<< "Six-packs: " << sixPack << endl;
	cout<< "Singles: " << single << endl;
	return(0);
}
