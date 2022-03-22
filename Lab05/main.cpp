/* -----------------------------------------------------------------------------
 * pino-3031856-lab-05:  main.cpp
 * Name: Audrey Pino
 * Assignment:   EECS-168 Lab05
 * Description:  This program will present the user with a choice of patterns (Checker Board, Rook Path, Running total, Upper Left Triangle, Upper Right Triangle) and then let the user set the size of the pattern( > 3).
 * Date: 101420
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
using namespace std;

//initial menu

int menu(){
	cout << "\n=========================" << endl;
	cout << "       Pattern Menu      " << endl;
	cout << "=========================" << endl;
        cout << "1) Checkeckerboard" << endl;
        cout << "2) Rook Path" << endl;
        cout << "3) Running Total" << endl;
        cout << "4) Upper Left Triangle" << endl;
        cout << "5) Upper Right Triangle" << endl;
	int pattern;

//Valid Input

	while(true){
		cout << endl << "Input Selection Number: ";
		cin >> pattern;

	if(pattern<1 || pattern>5){
		cout << endl << "Error" << endl;
		cout << "Please enter a valid selection option(1-5): ";
	}
	else{
		break;
	}
	}
	return(pattern);
}

//Option 5) Upper Right Triangle

	void upperRightTri(int t){
		for(int i=0;i<t;i++){
		for(int j=0;j<i;j++){
		cout << " ";
	}
	for(int j=0;j<t-i;j++){
		cout << "*";
	}
	cout << endl;
	}
	}

//Option 4) Upper Left Triangle

	void upperLeftTri(int t){
	for(int i=0;i<t;i++){
	for(int j=0;j<t-i;j++){
		cout << "*";
	}
	cout << endl;
	}
	}

//Option 3) Running Total

	void runningTotal(int t){
	for(int i=0;i<t;i++){
	for(int j=0;j<t;j++){
		cout << (i*t+j+1);
	if(j<t-1){
		cout << ",";
	}
	}
	cout << endl;
	}
	}

//Option 2) Rook Path

	void rookPath(int t,int x,int y){
	char **lst=new char*[t];
	for(int i=0;i<t;i++){
		lst[i]=new char[t];
	}

	for(int i=0;i<t;i++){
	for(int j=0;j<t;j++){
		lst[i][j]='*';
	}
	}
	
	for(int j=0;j<t;j++){
		lst[x][j]='-';
	}

	for(int j=0;j<t;j++){
		lst[j][y]='|';
	}

		lst[x][y]='R';

	for(int i=0;i<t;i++){
	for(int j=0;j<t;j++){
	cout <<lst[i][j];
	}
	cout << endl;
	}
}

//Option 1) Checkerboard

	void checker(int t){
	int a=1;
	for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
	if(a%2==0){
	cout << "X";
	}
	else{
	cout << "O";
	}
	a++;
	}
	cout << endl;
	}
	}

//Size of Pattern
	
	int main(){
	while(true){
	int ch=menu();
	
	cout <<endl<<"Input a size: ";
	int size;
	cin >> size;
	cout << endl;	

	switch(ch){
		case 1:{
	checker(size);
	break;
		       }
	
	case 2:{
	int x,y;
	
	while(true){
		cout << "Input X: ";
		cin >> x;
		if(x<0 || x>size-1){
		cout << endl << "Invalid Input. Please choose between 0-" << (size-1) << "." << endl;
		}
		else{
			break;
		}
	}

	while(true){
		cout << "Input Y: ";
		cin >> y;
		if(y<0 || y>size-1){
			cout << endl;
			cout << "Invalid Input. Please choose between 0-" << (size-1) << "." << endl;
		}
		else{
			break;
		}
	}

	cout << endl;
	rookPath(size,x,y);
	break;
		       }
	case 3:{
		runningTotal(size);
		break;
		}
	 case 4:{
		upperLeftTri(size);
		break;
		}
	case 5:{
		upperRightTri(size);
		break;
		}
	}
	cout << endl;

//Exit Menu

	char quit;
	cout << endl << "Do you want to quit (y/n)?: ";
	cin >> quit;

	if(quit=='y'){
		break;
	}
	cout << endl;
	}

system("read -p 'Goodbye...\n' var");
	return(0);
	}



