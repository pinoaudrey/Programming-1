/* -----------------------------------------------------------------------------
 * pino-3031856-lab-08:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab08
 * Description:  This program will use several functions and provide the user with a choice of function and number input.
 * Date: 110320
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
using namespace std;

//FUNCTIONS IN ORDER

int lastDigit(int n);
int removeLastDigit(int n);
int addDigit(int currentNum, int newDigit);
int reverse(int n);
bool isPalindrome(int n);
int countDigits(int n);
int sumDigits(int n);

//LAST DIGIT
int lastDigit(int n){
	return n % 10;
}

//REMOVE LAST DIGIT
int removeLastDigit(int n){
	if(n <= 9)
		return 0;
	return n / 10;
}

//ADD DIGIT
int addDigit(int currentNum, int newDigit){
	return currentNum * 10 + newDigit;
}

//REVERSE
int reverse(int n){
	int reverse = 0;
	while(n != 0){
		n = removeLastDigit(n);
		reverse ++;
	}
	return reverse;
}

//PALINDROME
bool isPalindrome(int n){
	return (n == reverse(n));
}

//COUNT DIGITS
int countDigits(int n){
	int count = 0;
	while(n>0){
		count ++;
		n = removeLastDigit(n);
	}
	return count;
}

//SUM OF DIGITS
int sumDigits(int n){
	int sum = 0;
	while(n != 0){
		sum = sum + lastDigit(n);
		n = removeLastDigit(n);
	}
	return sum;
}

//PRINT MENU
void printMenu(){
	cout << "1) Count digits" << endl;
	cout << "2) Last digit" << endl;
	cout << "3) Remove last digit" << endl;
	cout << "4) Add digit" << endl;
	cout << "5) Sum digits" << endl;
	cout << "6) Is Palindrome" << endl;
	cout << "7) Reverse" << endl;
	cout << "8) Exit" << endl;
	cout << "Choice: " << endl;
}

//MENU INPUT
void run(){
	int choice,num,add;
	do{
		printMenu();
		cin >> choice;

		switch(choice){
			case 1:
				cout << "Please enter a number: ";
				cin >> num;
				
				cout << "Number of digits: " << countDigits(num) << endl;
				break;

			case 2:
				cout << "Please enter a number: ";
                                cin >> num;

				cout << "Last digit: " << lastDigit(num) << endl;
				break;

			case 3:
				cout << "Please enter a number: ";
                                cin >> num;

				if(num >= 9){
					cout << "Number without last digit: " << removeLastDigit(num) << endl;
				}
				else{
					cout << "Number without last digit: 0...zero...zilch...nil...nought...nada..." << endl;
				}
				break;
			case 4:
				cout << "Please enter a number: ";
                                cin >> num;
				
				cout << "Please enter the number you wish to add: ";
				cin >> add;
				
				cout << "Number with addition: " << addDigit(num, add) << endl;
				break;	

			case 5:
				cout << "Please enter a number: ";
                                cin >> num;

				cout << "Sum of digits: " << sumDigits(num) << endl;
				break;

			case 6:
				cout << "Please enter a number: ";
                                cin >> num;

				if(isPalindrome(num)){
					cout << "This number is in fact palindrome." << endl;
				}
				else{
					cout << "Sorry, this number is not palindrome." << endl;
				}
				break;

			case 7:
				cout << "Please enter a number: ";
                                cin >> num;

				cout << "Reverse: " << reverse(num) << endl;
				break;

			case 8:
				break;
		}
		cout << endl;
	}

	while(choice != 8);
}

//MAIN - FROM WEBSITE
int main(){
	run();
	return(0);
}

