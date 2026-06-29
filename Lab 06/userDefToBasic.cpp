/* basic data type float to user def converstion into weight */
#include<iostream>
using namespace std;
class Weight{
	float x;
	public: 
	Weight(){
		x=0;
	}
	Weight( float p){
		x=p;
	}
	void display(){
		cout << "Weight in float: " << x << endl;
	}
	operator float();
};
Weight:: operator float(){
	return x;
}
int main(){
	float x;
	Weight w(1.5);
	x=w;
	cout << "Weight in float (converted from user def to basic type) is: " << x << endl;
	w.display();
}
