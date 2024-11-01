#include "complex.h"

int main() {
	Complex c1(1.0, 7.0), c2(3.0, 8.0);
	Complex c3(1.0, 1.0), c4(2.0, 2.0);
	Complex a = 6;
	Complex add = c1 + c2;
	Complex sub = c2 - c1;

	cout << "c1 + c2: " << add.getReal() << ", " << add.getImag() << endl;
	
	cout << "c1 - c2: " << sub.getReal() << ", " << sub.getImag() << endl;

	c3 += c1;
	cout << "c3 real: " << c3.getReal() << ", c3 imag: " << c3.getImag() << endl;


	c4 -= c1;
	cout << "c4 real: " << c4.getReal() << ", c4 imag: " << c4.getImag() << endl;

	return 0;
}