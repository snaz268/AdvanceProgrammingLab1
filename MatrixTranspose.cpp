#include <iostream>
using namespace std;

void MatrixTranspose(){
	int A[10][10], i, j, rows, cols;
	char ans;
	do{
		cout << "How many rows does your matrix have?" << endl;
		cin >> rows;
		cout << "How many columns does your matrix have?" << endl;
		cin >> cols;
		for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			cin >> A[i][j];

		cout << "Entered Matrix : \n ";
		for (i = 0; i < rows; i++){
			for (j = 0; j < cols; j++){
				cout << A[i][j] << " ";
			}
			cout << "\n ";
		}
		cout << "Transpose of your Matrix:" << endl;
		for (i = 0; i < rows; ++i){
			for (j = 0; j < cols; ++j){
				cout << A[j][i] << " ";
			}
			cout << endl;
		}
		cout << "Do you want to transpose another matrix? (Y/N)" << endl;
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
}