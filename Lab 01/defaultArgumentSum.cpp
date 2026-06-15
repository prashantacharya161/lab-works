///LAB 2 
//DEFAULT ARGUMENT
#include<iostream>
using namespace std;
//******** sum *******
void sum(float a, float b=4, float c=2){
	cout<<"Sum is: "<< a+b+c <<"\n";
	
}
int main(){
	sum(a, b,c);
	sum(1,2,3);
	sum(0);
	return 0;
}






