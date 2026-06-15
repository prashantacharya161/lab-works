/* write a class for initiating the object that represents the two dimensional cartesian coordinate system
1. make a particular member function of one class to friend in another class for addition
2. make other three function to work as bridge between the classes for multiplication , dividion and subtraction
3. Also write a small program to demonstrate that all the member function of one classare the friend function of another classif the formar class is
 made friend to the latter. 
 Make least possible classes to demonstrate all above in single program without any conflict. 
 */
 #include<iostream>
 using namespace std;
 class operation;
 class cartesian{
 	public: 
 	int x;
 	int y;
 	public: 
 	cartesian (int a, int b){
 		x=a;
 		y=b;
	 }
 	friend void addition(cartesian&, cartesian&);
 	friend void multiplication(cartesian&, cartesian&);
 	friend void division(cartesian&, cartesian&);
 	friend void subtraction(cartesian&, cartesian&);
 };
 class operation{
// 	int add;
// 	int mult;
// 	double div;
 	public: 
// 	friend void multiplication(cartesian&);
// 	friend void division(cartesian&);
// 	friend void subtraction(cartesian&);
 	static void addition(cartesian& c, cartesian& d){
 		cout<<"Addition is:"<<c.x+d.x <<","<< d.x+d.y<<endl;
	 }
 };
 void multiplication(cartesian &c, cartesian& d){
     
     cout<<"Multiplication: "<<c.x*d.x <<","<< d.x*d.y<<endl;
 }
void subtraction(cartesian &c,  cartesian& d){
     
     cout<<"subtraction: "<<c.x-d.x <<","<< d.x-d.y<<endl;
 }
  void division(cartesian &c,  cartesian& d){
     
     cout<<"division: "<<c.x/d.x <<","<< d.x/d.y<<endl;
 }
 int main(){
 	cartesian c(10, 8);
 	cartesian d(20, 4);
 	operation::addition(c, d);
 	multiplication(c,d);
 	subtraction(c,d);
 	division(c,d);
 	return 0;
 }
 
