/* -----------------------------------------------------------------------------
 * pino-3031856-lab-06:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab06
 * Description:  This program will create an array of strings based off the user input. The user will then populate the array and then the longest and shortest string.
 * Date: 102120
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <string>
using namespace std;
int main(){
	int numWords;
	string* words = nullptr;

	cout << "Input an array size for you words array: ";
	cin >> numWords;
	cout << "Now please enter " << numWords << " words." << endl;

	words = new string[numWords];
	int numLetter[numWords];

	for(int i=0;i<numWords;i++){
		cout << "Input a word: ";
		cin >> words[i];
	}
	for(int i=0;i<numWords;i++){
		numLetter[i]=words[i].length();
	}
	int max = numLetter[0];
	int min = numLetter[0];
	for(int i=0;i<numWords;i++){
		if(min>numLetter[i]){
			min=numLetter[i];
		}
		if(max<numLetter[i]){
			max=numLetter[i];
		}
	}

	for(int i=0;i<numWords;i++){
	if(numLetter[i]==max){
		cout << "The longest word is: " << words[i] << endl;
	}
	if(numLetter[i]==min){
		cout << "The shortest word is: " << words[i] << endl;
	}
	}

return(0);
}
