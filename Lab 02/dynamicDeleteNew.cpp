//USE NEW AND DELETE
#include<iostream>
using namespace std;
int main(){
	int n, i, *arr, tot=0;
	float avg;
	cout<<"how many numbers?"<<endl;
	cin>>n;
	arr = new int[n];
	cout<<"Enter elements\n";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		tot+=arr[i];
	}
	avg = static_cast<float>(tot)/n;
	cout<<"total: "<< tot<<endl;
	cout<<"average: "<< avg<< endl;
	delete[] arr;
	return 0;
	
}
