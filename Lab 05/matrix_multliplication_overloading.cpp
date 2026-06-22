#include<iostream>
using namespace std;
class matrix{
	int m[50][50];
	int r;
	int c;
	public: 
	//get size of matrix
	void getSize(){
		cout << "Enter number of rows: " << endl;
		cin >> r;
		cout << "Enter number of columns: " << endl;
		cin >> c;
	}
	//get matrix element
	void getElements(){
		for ( int i = 0; i < r; i++){
			for ( int j = 0; j < c; j++){
				cout << " Element [" <<i<< "][" <<j<<"]\t: ";
				cin >> m[i][j];  
			}
		}
	}
	//display
	void display(matrix a, matrix b){
		for ( int i = 0; i < a.r; i++){
			for ( int j = 0; j < b.c; j++){
				cout <<  "\t" << m[i][j] << "\t";  
			}
			cout << endl;
		}
	}
	void display(){
		for ( int i = 0; i < r; i++){
			for ( int j = 0; j < c; j++){
				cout <<  "\t" << m[i][j] << "\t"; 
			}
			cout << endl;
		}
	}
	
	// product of matrix
	friend matrix operator * (matrix& a, matrix& b);
};
matrix operator * (matrix& a, matrix& b){
	
	matrix temp;
	for ( int i = 0; i < a.r; i++){
		for ( int j = 0; j < b.c; j++){
			temp.m[i][j] = 0;
			for (int k = 0; k < a.c; k++){
				temp.m[i][j] += a.m[i][k] * b.m[k][j];
			}
		}
	}
	return temp;
}
int main(){
	matrix m1, m2, m3;
	m1.getSize();
	m2.getSize();
	cout << "Enter elements of first matrix: \n";
	m1.getElements();
	cout << "Enter elements of second matrix: \n";
	m2.getElements();
	m3 = m1 * m2;
	m1.display();
	m2.display();
	m3.display(m1, m2);
	
}
