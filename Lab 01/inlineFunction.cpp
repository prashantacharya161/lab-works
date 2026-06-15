#include<iostream>
//#define comp(a, b) ((a>b)?a:b)
using namespace std;
inline int comp(int a, int b){
	return (a>b)?a:b;

}
int main(){
	cout<<"Greater is: " << comp(4,5);
	return 0;
}
