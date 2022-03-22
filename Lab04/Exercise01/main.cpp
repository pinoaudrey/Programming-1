/* -----------------------------------------------------------------------------
 * pino-3031856-lab-02:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab04
 * Description:  This program will allow the user to see the ASCII representation of a specific number they want or to see all the ASCII conversions from 33 to 126.
 * Date: 092920
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
using namespace std;
int main(){
	int numSelect, numValue;

while(numSelect != 3){
	cout << "\n1) Select a specific number" <<endl;
	cout << "2) Display visible ASCII values (33 to 126)" <<endl;
	cout << "3) Exit" <<endl;
	cout << "Choice: ";
	cin >> numSelect;

if (numSelect == 1){
	cout << "Enter value: ";
	cin >> numValue;
	cout << numValue << " = " << (char)numValue << endl;
}

if(numSelect == 2){
	for (int i = 33; i <= 126; i++){
		cout << i << " = " << (char)i << endl;
	}
}
}
	return (0);
}



