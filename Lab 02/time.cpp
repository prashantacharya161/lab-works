//wap to create a class "time" having datamembers hrs, min, and sec. then add two 'time' objects as argument and also returning objects as arguments
#include<iostream>
using namespace std;
class Time{
	int hour, minute, seconds;
	public:
		void gettime(){
			cout<<"enter hour , minute and second: "<<endl;
			cin>>hour>>minute>>seconds;
		}
		void sum(Time t1, Time t2){
			seconds = t1.seconds + t2.seconds;
			int temp, carryover = 0, rem;
			temp = seconds;
			if(temp >=60){
				rem = temp%60;
				carryover = temp/60;
				}
			seconds = rem;
			minute = t1.minute + t2.minute + carryover;
			temp = minute;
			if(temp >=60){
				rem = temp%60;
				carryover = temp/60;
				}
			minute = rem;
			hour = t1.hour + t2.hour+carryover;
		}
		void display(){
			cout<<"Format (hour:minute:seconds)"<<hour":"<<minute":"<<seconds<<endl;
		}
};
int main(){
	class t1, t2, t3;
	t1.gettime();
	t2.gettime();
	t3.sum(t1, t2);
	t3.display();
}
