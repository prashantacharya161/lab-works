//class named student
//name, rollno, college name, batch. 
#include<iostream>
using namespace std;
class student{
	string name;
	string rollNo;
	static string collegeName;
	static int batch;
	public: 
	void getinfoCollege(){
		cout<<"Enter college name: "<<endl;
		cin>>collegeName;
		cout<<"Enter the batch: \n";
		cin>>batch;
	}
	void getInfoStudent(){
		cout<<"Enter name, roll no";
		cin>>name>>rollNo;
	}
	void display(){
		cout<<"College: "<<collegeName<<endl<<"batch: "<<batch<<endl<<"Name: "<<name<<"rollNo: "<<rollNo<<endl;
	}
};
string student::collegeName = "KEC";
int student::batch = 2082;
int main(){
	student s1, s2, s3, s4;
	s1.getInfoStudent();
	s2.getInfoStudent();
	s3.getInfoStudent();
	s4.getInfoStudent();
	s1.display();
	s2.display();
	s3.display();
	s4.display();
	return 0;
}
