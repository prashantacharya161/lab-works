#include<iostream>
using namespace std;
class BEI082{
	protected:
	   string subject[5];
	public: 
	getsubject(){
		cout<<"Enter subjects: \n";
		for(int i=0; i<5; i++){
			cout<<"enter subject"<<i+1 <<endl;
			cin>>subject[i];
		}
	}
	
	void show(){
		cout<<"Subjects: \n";
		for(int i = 0; i<5; i++){
			cout<<subject[i]<<endl;
		}
	}
};
class Detail: public BEI082{
	string name;
	static int id;
	public: 
	Detail(){
		id++;
	}
	void getdata(){
		cout<<"Enter the name:";
		cin>>name;
		getsubject();
	}
	void show(){
		cout<<"Student name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
		BEI082::show();
		
	}
};
int Detail::id = 0;
int main(){
	Detail d;
	d.getdata();
	d.show();
	return 0;
}
