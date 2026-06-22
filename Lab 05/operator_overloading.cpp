//comparision overloading
#include<iostream>
using namespace std;
class Distance{
	int feet;
	int inch;
	public: 
	Distance(){
		
	}
	Distance(int x, int y): feet(x), inch(y){
		
	}
	bool operator <(Distance d){
		int temp1 = feet * 12 + inch;
		int temp2 = d.feet * 12 + inch;
		return (temp1<temp2);

	}
	void operator --(){
		feet--;
		inch--;
	}
	void operator ++(){
		feet++;
		inch++;
	}
	void display(){
		cout << "Distance is: ";
		cout << "feet =" << feet << " \t inch =" << inch << endl;
	}
};
int main(){
	Distance d1(2, 3), d2(5,6);
	bool x;
	x= d1<d2;
	if(x = true){
		--d2;
	}
	else{
		++d1;
	}
	d1.display();
	d2.display();
}
