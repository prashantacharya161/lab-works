//class and object

#include<iostream>
using namespace std;
class complex{
	double real;
	double img;

	public:
		void setreal(double a){
			real = a;
		}
		void setimg(double a){
			img = a;
		}
		void add(complex a, complex b){
			real = a.real + b.real;
			img = a.img + b.img;
		}
		void display(complex){
			cout<<"sum is: "<<real <<"+ i"<< img;
		}
};
int main(){
	double a,b;
	complex c1, c2, c3;
	cout<<"Enter first number(real and img): \n";
	cin>>a>>b;
	c1.setreal(a);
	c1.setimg(b);
	cout<<"Enter second number(real and img): \n";
	cin>>a>>b;
	c2.setreal(a);
	c2.setimg(b);
	c3.add(c1, c2);
	c3.display(c3);
	return 0;
}

