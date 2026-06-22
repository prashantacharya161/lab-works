/*

*/
#include<iostream>
using namespace std;
class complex{
	double real;
	double img;
	public: 
	void getinput(){
		cout << "Enter real part: ";
		cin >> real;
		cout << "Enter img part: ";
		cin >> img;
	}
	friend complex operator +(complex &a, complex &b);
	void display(){
		cout << "Sum is: " << real << "+i" << img << endl;
	}
};
 	complex operator +(complex &a, complex &b){
		complex temp;
		temp.real = a.real + b.real;
		temp.img = a.img + b.img;
		return temp;
	}
int main(){
	complex c1, c2, c3;
	cout << "Enter first complex: " << endl;
	c1.getinput();
	cout << "\nEnter second complex: " << endl;
	c2.getinput();
	c3 = c1 + c2;
	c3.display();
}
