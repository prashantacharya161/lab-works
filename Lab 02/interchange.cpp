//function overloading
#include<iostream>
using namespace std;
void interchange ( char a, char b){
	cout<<"initial value of a and b:"<< a<< b<<endl;
	char temp;
	temp = a;
	a=b;
	b=temp;
		cout<<"interchanged value of a and b:"<< a << b<<endl;
}
void interchange (int a, int b){
	cout<<"initial value of a and b"<<a <<b<<endl;
	int temp;
	temp =a;
	a=b;
	b=temp;
	cout<<"interchanged value of a and b:"<< a<< b<<endl;
}
void interchange (double a, double b){
	cout<<"initial value of a and b:"<< a<< b<<endl;
	double temp;
	temp =a;
	a=b;
	b=temp;
		cout<<"interchanged value of a and b:"<< a<< b<<endl;
}
int main(){
	interchange (2,3);
	interchange('a','b');
	interchange(1.1, 2.2);
	return 0;
}
