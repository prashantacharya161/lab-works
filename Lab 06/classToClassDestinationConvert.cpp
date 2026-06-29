#include<iostream>
using namespace std;

class Fahrenheit;

class Celcius {
    float c;

public:
    Celcius() {
        c = 0;
    }

    Celcius(float x) {
        c = x;
    }

//    operator Fahrenheit();
	float getCelcius(){
		return c;
	}

    void display() {
        cout << "Temperature in Celsius: " << c << endl;
    }
};

class Fahrenheit {
    float f;

public:
    Fahrenheit() {
        f = 0;
    }

    Fahrenheit(Celcius x) {
       f = (9.0/5.0) * x.getCelcius() + 32;
    }
    void display() {
        cout << "Temperature in Fahrenheit: " << f << endl;
    }
};


int main() {
    Celcius c1(-40);
    Fahrenheit f1;
    f1 = c1;
    c1.display();
    f1.display();

    return 0;
}
