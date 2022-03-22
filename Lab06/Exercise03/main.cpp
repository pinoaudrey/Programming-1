/* -----------------------------------------------------------------------------
 * pino-3031856-lab-06:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab06
 * Description:  This program will create a program that reads a text file and creates an array to store all of the values. The values will then be displayed back to the user as well as the option to search the array for values as many times as they desire.
 * Date: 102120
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream inFile;
    int size = 0;
    int *numbers;
    char choice;
   inFile.open("input.txt");

   if(inFile.is_open()){
    inFile >> size;
    numbers = new int[size];

    cout << "Contents of input.txt: " << endl << "[";
        for(int i=0;i<size;i++){
		inFile >>  numbers[i];
	if(i<size-1)
		cout << numbers[i] << ", ";
	else
		cout << numbers[i] << "]" << endl << endl;
	}

	inFile.close();

	while(true){
		cout << "Input a value to search for: ";
		int search;
		cin >> search;
		bool found = false;

		for(int i=0;i<size;i++){
			if(numbers[i]==search){
				found = true;
				break;
			}
		}
		if(found)
			cout << search << " is in the array." << endl;
		else
			cout << search << " is NOT in the array." << endl;
		
		cout << "Do you wish to quit (y/n): ";
		cin >> choice;
		if(choice=='y' || choice=='Y')
			break;
	}
}
   else
   {
	   cout << endl << "File could not be opened!" << endl;
   }
delete[] numbers;

return(0);
}
