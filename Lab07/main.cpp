/* -----------------------------------------------------------------------------
 * pino-3031856-lab-07:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab07
 * Description:  This program will obtain a file name from the user, containing data pertaining to a 2D array. The program will then create a file for each of the following: average of the entire array and average of each row, original values with the order of rows reversed, original values with the array flipped top to bottom. Then, if the dimensions of the array have the same number of rows and columns, a file will be created with the array mirrored on the diagonal.
 * Date: 102720
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main(){

//FILES

ifstream inFile;
ofstream averages;
ofstream reverse;
ofstream flipped;
ofstream diagonal;

//VARIABLES

string file = " ";;
int rows = 0;
int cols = 0;

//PROMPT USER FOR FILE

cout << "Please enter the name of the file you would like to open: ";
cin >> file;

inFile.open(file);
if(inFile.is_open()){
	inFile >> rows;
	inFile >> cols;

//CREATE 2D-ARRAY
double** array  = new double* [rows];
for(int i=0;i<rows;i++){
	array[i] = new double [cols];
}

for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
	inFile >> array[i][j];
}
}

//CALCULATIONS OF IN-FILE FOR OUT-FILES
double totalAvg = 0.0;
double totalSum = 0.0;
double v = 0;

for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
	totalSum = totalSum + array[i][j];
	v++;
}
}

totalAvg = totalSum/v;

double sumCols = 0;
double* avg = nullptr;
avg = new double[cols];
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
	sumCols += array[i][j];
}
	avg[i] = sumCols/cols;
	sumCols = 0;
}

inFile.close();

//AVERAGES
averages.open("averages.txt");
averages.precision(1);
averages << fixed;
averages<<"Total average: " << totalAvg << endl;

for(int i=0;i<cols;i++){
averages << "Row " << (i+1) << " average: " << avg[i] << endl;
}
averages.close();

//REVERSE
reverse.open("reverse.txt");
reverse.precision(1);
reverse << fixed;

for(int i=0;i<rows;i++){
for(int j=cols-1;j>=0;j--){
	reverse << array[i][j] << "\t";
}
	reverse << endl;
}
reverse.close();

//FLIPPED
flipped.open("flipped.txt");
flipped.precision(1);
flipped << fixed;

for(int i=rows-1;i>=0;i--){
for(int j=0;j<cols;j++){
	flipped << array[i][j] << "\t";

}
	flipped << endl;
}
flipped.close();

//DIAGONAL
if(rows == cols){
diagonal.open("diagonal.txt");
diagonal.precision(1);
diagonal << fixed;

for(int i=0;i<cols;i++){
for(int j=0;j<rows;j++){
	diagonal <<  array[i][j] << "\t";
}
	diagonal << endl;
}
}
diagonal.close();

delete[] avg;
for(int i=0;i<rows;i++){
	delete[] array[i];
}
	delete[] array;
}

//INVALID INPUT
else
	cout << "Sorry, the file '" << file << "' was unable to be opened." << endl;

return(0);
}
