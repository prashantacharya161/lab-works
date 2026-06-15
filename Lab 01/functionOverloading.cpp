//Function overloaing
//wap to find area of rectangle, square, and surface area of cuboid
#include<iostream>
using namespace std;
void area(float a, float b){ //area of 2d
	cout <<"area of rectangle: "<< a*b << endl;
}
void area(float a, float b, float c){ //surface area of cuboid
	cout <<"surface area of cuboid: "<< 2*(a*b)*(b*c)*(a*c);
}
int main(){
	area(4,5);
	area(3,4,5);
	return 0;
}
