#include <iostream>
using namespace std;

class Complex {
private:
	double r;
	double i;
public:
	void setCom(double, double);
	void print();
};

void Complex::setCom(double N, double M) {
	r = N;
	i = M;
}

void Complex::print() {
	cout << r << " + " << i << "i" << endl;
}