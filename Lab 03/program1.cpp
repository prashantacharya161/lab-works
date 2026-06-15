//CREATE a class named weight that represents weight in kg and gram. Create another class named price that represents rate and total price. Use a friend function which is friend to both class, 
//that gives total price when user inputs weight in kg and gram. Again create another friend function that is friend to both class which gives weight in kg and gram when price is input. 

#include<iostream>
using namespace std;
class price;
class weight{
	int kg;
	double gram;
	public:
		void getweight(){
			cout<<"Enter weight in kg-gram:\n";
			cin>>kg>>gram;
		}
		friend double calcTotPrice(weight&, price& );
		friend double calcwt(price&);
};
class price{
	double rate;
	double totalPrice;
	public:
//		price(double p){
//			this->totalPrice;
//		}
		void getprice(){
			cout<<"Enter the rate: \n";
			cin>>rate;
		}
		void getdata(){
			cout<<"enter the rate: \n";
			cin>>rate;
			cout<<"enter the total price: \n";
			cin >>totalPrice;
		}
		friend double calcTotPrice(weight&, price& );
		friend double calcwt(price&);
};

  double calcTotPrice(weight &b, price &a){
	return  (b.kg * a.rate + (b.gram * a.rate)/1000);
}
  double calcwt(price&a){
  	weight b;
  	b.kg = a.totalPrice / a.rate;
  	b.gram = (a.totalPrice - b.kg*a.rate)/a.rate;
  	cout<<"Weight is: "<<b.kg+b.gram<<" kg";
  }
int main(){
	double value;
	int input;
	weight w;
	price p;
	cout<<"What to calculate? 1 for price, and 2 for weight"<<endl;
	cin>>input;
	if(input==1){
		w.getweight();
		p.getprice();
		value = calcTotPrice(w, p);
		cout<<"Total price is: "<<value<<endl;
	}
	else if(input ==2){
		p.getdata();
		value = calcwt(p);
	}

	return 0;
}

