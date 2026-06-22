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
	
	void display(){
		cout << "Sum is: " << real << img << "+i"<< endl;
	}
	
	complex operator -(complex& a){
		complex temp;
		temp.real = real - a.real;
		temp.img = img - a.img;
		return temp;
	}
};
 	
int main(){
	complex c1, c2, c3;
	cout << "Enter first complex: " << endl;
	c1.getinput();
	cout << "\nEnter second complex: " << endl;
	c2.getinput();
	c3 = c1 - c2;
	c3.display();
}
