#include <iostream>
#include <math.h>
using namespace std;

class Complex {
private:
	double real, imag;
public:
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }
	Complex(int r) : real(r), imag(0.0) { }
	double getReal() { return real; }
	double getImag() { return imag; }
	void setReal(double r) { real = r; }
	void setImag(double i) { imag = i; }
	friend Complex operator+(const Complex& c1, const Complex& c2);
	friend Complex operator-(const Complex& c1, const Complex& c2);
	Complex operator+=(const Complex& c1);
	Complex operator-=(const Complex& c2);
	operator double() const {
		return sqrt(real * real + imag * imag);
	}
	bool operator==(const Complex& c) const {
		return (real == c.real) && (imag == c.imag);
	}
	bool operator!=(const Complex& c) const {
		return !(*this == c);
	}
	friend ostream& operator<<(ostream& os, const Complex& v) {
		os << "(" << v.real << ", " << v.imag << ")" << endl;
	}
	friend istream& operator>>(istream& in, Complex& c) {
		cout << "실수부: ";
		in >> c.real;
		cout << "허수부: ";
		in >> c.imag;
		return in;
	}
};

Complex operator+(const Complex& c1, const Complex& c2)
{
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator-(const Complex& c1, const Complex& c2)
{
	
	return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

Complex Complex::operator+=(const Complex& c2)
{
	Complex c;
	c.real = this->real += c2.real;
	c.imag = this->imag += c2.imag;
	return c;
}

Complex Complex::operator-=(const Complex& c2)
{
	Complex c;
	c.real = this->real -= c2.real;
	c.imag = this->imag -= c2.imag;
	return c;
}