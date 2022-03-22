/* -----------------------------------------------------------------------------
 * pino-3031856-lab-06:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab06
 * Description:  This program will prompt the user for a filename and store it, while creating an array of doubles. Then two different copies will be made, one normalizing the values, and the other reversing the order of the values. Both the normalized and reversed arrays will be stored in separate textfiles. 
 * Date: 102120
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){

//FILES

ifstream inFile;
ofstream normalized;
ofstream reversed;

//VARIABLES
int size = 0;
//PROMPT USER FOR FILE
while(1){
	string file;
	cout << "Please enter the name of the file you would like to open: ";
	cin >> file;
	inFile.open(file);
	if(inFile.good())
		break;
}

inFile >> size;
double og[size];

for(int i=0;i<size;i++){
	inFile >> og[i];
}

double norm[size];
for(int i=0;i<size;i++){
	norm[i] = og[i];
}
double min = norm[0];
double max = norm[0];
//FIND MIN AND MAX
for(int i=0;i<size;i++){
	if(min>norm[i])
		min = norm[i];
	if(max<norm[i])
		max = norm[i];
}

//CALCULATION NORMALIZED
for(int i=0;i<size;i++){
	norm[i] = (og[i] - min) / (max - min);
}

//NORMALIZED
normalized.open("normalized.txt");
	normalized << "Original array: [";
	for(int i=0;i<size;i++){
		if(i<size-1)
			normalized << og[i] << ", ";
		else
			normalized << og[i];
	}
	normalized << "]" << endl;
	
	normalized << "Normalized array: [";
	for(int i=0;i<size;i++){
		if(i<size-1)
			normalized << norm[i] << ", ";
		else
			normalized << norm[i];
	}
	normalized << "]" << endl;
normalized.close();
double rev[size];
for(int i=0;i<size;i++){
	rev[i] = og[i];
}
//CALCULATION REVERSED
for(int i=size - 1;i>=0;i--){
        rev[size - 1 - i] = og[i];
}

//REVERSED
reversed.open("reversed.txt");
	reversed << "Original array: [";
	for(int i=0;i<size;i++){
		if(i<size-1)
			reversed << og[i] << ", ";
		else
			reversed << og[i];
	}
	reversed << "]" << endl;

	reversed << "Reversed array: [";
	for(int i=0;i<size;i++){
		if(i<size-1)
			reversed << rev[i] << ", ";
		else
			reversed << rev[i];
	}
        reversed << "]" << endl;

reversed.close();

return(0);
}

