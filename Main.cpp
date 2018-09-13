#include <iostream>
using namespace std;
//#include "MatrixAddSub.cpp"
//#include "MatrixMultiplication.cpp"
#include "MatrixTranspose.cpp"

int main(){
	int s;
	cout << "MENU" << endl << "1. Add/Subtract" << endl << "2. Multiply" << endl << "3.Transpose" << endl << "To exit, enter 0. Enter 1,2 or 3: ";
	cin >> s;
	do{
		switch (s){
		case 0:
			exit(0);
			break;
		case 1:
			//MatrixAddSub();
			break;
		case 2:
			//MatrixMultiplication();
			break;
		case 3:
			MatrixTranspose();
			break;
		default:
			cout << "Thats not quite right. Enter a number from 1 to 3." << endl;
			break;
		}
	} while (true);

}