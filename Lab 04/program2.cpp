#include<iostream>
using namespace std;
//class Nagrikta;
//class NationalId;
class DrivingLiscense{
	protected: 
	long int id;
	char category;
	string poi;
	public: 
//	DrivingLiscense(){
//		cout<<"Enter driving license number: ";
//		cin>>id;
//		cout<<"Enter license category:(A, B, or C)";
//		cin>>category;
//		cout<<"Enter place of issue:";
//		cin>>poi;
//	}
	void display(){
		cout<<"Information from liscense: \n";
		cout<<"Liscense number: "<<id <<"Category: "<<category <<"Place of issue: "<<poi<<endl;
	}
};
class Nagrikta{
	protected:
		string citizNo;
		string country;
		string dob;
	public:
		Nagrikta(){
			cout<<"Enter citizenship number: ";
			cin>>citizNo;
			cout<<"Enter country name: ";
			cin>>country;
			cout<<"Enter date of bitrh(mm-dd-yyyy) ";
			cin>>dob;
		}
		void display(){
			cout<<"Information from citizenship: \n";
			cout<<"Citizenship Number: "<<citizNo <<"Country Name: "<< country<<"Date of birth: "<<dob<<endl;
		}
};
class NationalId{
	protected: 
	long int id;
	string poi;
	public:
//		NationalId(){
//			cout<<"Enter national id: ";
//			cin>>id;
//			cout<<"Enter place of issue: ";
//			cin>>poi;
//		}
		void display(){
			cout<<"Information from National ID: \n";
			cout<<"National id: "<<id <<"Place of Issue: "<<poi<<endl;
		}
};
class Detail: public Nagrikta , public DrivingLiscense, public NationalId{
	string name;
	int age;
	public:
		Detail(){
			cout<<"Enter the name: ";
			cin>>name;
			cout<<"Enter the age: ";
			cin>>age;
		}
		void display(){
//			cout<<"Name: "<< name << "age: "<<age<<endl;
//			NationalId::display();
//			Nagrikta::display();
//			DrivingLiscense::display();
			cout<<country;
		}
};
int main(){
	Detail d;
	d.display();
}

