/* -----------------------------------------------------------------------------
 * pino-3031856-lab-09:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab09
 * Description:  This program will create an array manipulation program to allow the user to change an array through a command line argument.
 * Date: 111020
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[]){

	  if (argc == 3){
   	int length = atoi(argv[2]);
   	int numbers[100],x,i=0;
	ifstream read;
	read.open(argv[1]);
	if(!read){
		cout << "the file you entered does not exist." << endl;
		return 0;
	}

	while(read >> x){
		numbers[i++] = x;
	}

	int choice,index,count=0;
	do{
		cout << "Selection" << endl;
		cout << "1) Insert" << endl;
		cout << "2) Remove" << endl;
		cout << "3) Count" << endl;
		cout << "4) Print" << endl;
		cout << "5) Exit" << endl;
		cout << "Choice: ";
		cin >> choice;
		cout << endl;

		switch(choice){
			case 1:
				cout << "Enter a element to insert: ";
				cin >> numbers[length++];
				cout << "Inserted" << endl << endl;
				break;

			case 2:
				cout << "Enter a element to delete: ";
				cin >> x;
				index = -1;
				for(i=0;i<length;i++){
					if(x == numbers[i]){
						index = i;
						break;
					
					}
				}
				for(i=index;i<length;i++){
					numbers[i] = numbers[i+1];
				}
				length--;
				if(index != -1){
					cout << "Deleted" << endl << endl;
				}
				else{
					cout << x << " could not be found to delete." << endl << endl;
				}
				break;
			case 3:
				cout << "Enter a element to Count: ";
				cin >> x;
				count = 0;
				for(i=0;i<length;i++){
					if(x == numbers[i]){
					count++;
					}
				}
				if(count != 0){
					cout << x << " was found " << count << " times." << endl << endl;
				}
				else{
					cout << x << " was not found." << endl << endl;
				}
				break;
			case 4:
				cout << "Elements in array: " << endl;
				for(i=0;i<length;i++){
					cout << numbers[i] << " ";
				}
				cout << endl << endl;
				break;
			case 5:
				cout << "Goodbye!" << endl;
				break;
			}
	}
	while(choice != 5);
	  }
	  else{
		  cout << "Enter command line arguments : filename and no.of elements to read" << endl;
	  }
}
