/* -----------------------------------------------------------------------------
 * pino-3031856-lab-03:  main.cpp
 * Name: Audrey Pino
 * Assignment: EECS-168 Lab03 Exercise03
 * Description:  This program will open a restaurant and gain user input and output a receipt.
 * Date: 092120
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main(){

	cout.precision(2);
	cout << fixed;

char a = 0, b = 0, c = 0;
int tacos, sushi, dessert, age;
float tacos$ = 0, sushi$ = 0, dessert$ = 0, ageDisc = 0, kidDisc = 0, subTotal = 0, total = 0, tax = 0;

cout << "==============================\n";
cout << "Welcome to Audrey's Restaurant\n";
cout << "==============================\n";

        cout << "Do you want Tacos? (y/n): ";
        cin >> a;
        if(a=='y'||a=='Y'){
        cout << "How many would you like?"<<endl;
        cin >> tacos;
        }
	if(a=='n'||a=='N'){
	tacos = 0;
	}
	if(tacos <= 0){
		tacos = 0;
                cout << " " << endl;
        }

        cout << "\nDo you want Sushi? (y/n): ";
        cin >> b;
        if(b=='y'||b=='Y'){
        cout << "How many would you like?: "<<endl;
        cin >> sushi;
        }
	if(b=='n'||b=='N'){
	sushi = 0;
	}
	if(sushi <= 0){
		sushi = 0;
                cout << " " << endl;
        }


        cout << "\nDo you want Dessert? (y/n): ";
        cin >> c;
	if(c=='y'||c=='Y'){
	cout << "How many would you like?: "<<endl;
	cin >> dessert;
	}
	if(c=='n'||c=='N'){
	dessert = 0;
	}
	if(dessert <= 0){
		dessert = 0;
		cout << " " << endl;
	}


	cout << "\nHow old are you?: "<<endl;
	cin >> age;

cout << "==============================\n";
	tacos$ = (tacos * 3.50);
	sushi$ = (sushi * 7.25);
	dessert$ = (dessert * 5.50);
	subTotal = (tacos$ + sushi$ + dessert$);

cout << tacos << " Tacos @ $3.50 ==> $" << tacos$ <<endl;
cout << sushi << " Sushi @ $7.25 ==> $" << sushi$ <<endl;
cout << dessert << " Dessert @ 5.50 ==> $" << dessert$ <<endl;
cout << "Subtotal: $" << subTotal << endl;
	if(age >= 65){
	tax = (total * 0.5);
                ageDisc = (subTotal + tax) * 0.1;
	cout << "Tax: $" << tax << endl;
	cout << "Discount: $" << ageDisc << endl;
		total = (subTotal + tax - ageDisc);
        }
        if(age <= 12){
                kidDisc = (subTotal - dessert$);
	tax = (kidDisc * 0.5);
	cout << "Tax: $" << tax << endl;
	cout << "Discount: $" << dessert$  << endl;
	total = (kidDisc + tax);
        }
        if(age > 12 && age < 65){
	tax = (subTotal * 0.5);
	cout << "Tax: $" << tax << endl;
	cout << "Discount: $0.00" << endl;
	total = (subTotal + tax);
        }

cout << "==============================\n";
cout << "Total: $" << total << endl;
cout << "\nPlease come again!\n";

return(0);
}









