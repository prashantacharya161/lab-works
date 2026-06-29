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
};
int main(){
	float x = 1.5;
	Weight w;
	w=x;
	w.display();
}
