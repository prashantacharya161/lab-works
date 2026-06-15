//3 constructors
#include<iostream>
using namespace std;
class constructor{
	int x;
	public:
		constructor (){
			cout<<"Initializing default constructor: \n";
			x=1;
		}
		constructor (int a){
			cout<<"Initializing parameterized constructor: \n";
			x=a;
		}
		constructor (constructor &a){
			cout<<"Initializing copy constructor: \n";
			x=a.x;
		}
		int display(){
			return x;
		}
};
int main(){
	constructor c1;
	constructor c2(5);
	constructor c3=c2;
	cout<<"value of default constructor: "<< c1.display()<<endl;
	cout<<"value of parameterized constructor: "<< c2.display()<<endl;
	cout<<"value of copy constructor: "<< c3.display()<<endl;
	//c1.display();
}
