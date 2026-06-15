#include<iostream>
using namespace std;
void sum(float a, int b){
	cout<<"sum: "<<a+b<<"\n";
}
int main(){
	sum(4,5.5);
	sum(2.3, 5.5);
	return 0;
}
