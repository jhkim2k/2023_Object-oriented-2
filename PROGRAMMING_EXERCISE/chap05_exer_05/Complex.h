#include <iostream>
using namespace std;

class Complex {
	double r;
	double i; // Complex Ŭ������ ��� ���� ����
public:
	Complex() {
		r = 0;
		i = 0;
	}
	Complex(double _r, double _i): r(_r), i(_i) {} // ������ �ߺ� ����

	void print(); // ��� �Լ��� ���� ����

	void setR(double _r) { r = _r; }
	void setI(double _i) { i = _i; } // ������ ����
	double getR() { return r; }
	double getI() { return i; } // ������ ����
};

void Complex::print() {
	cout << "(" << r;
	if (i >= 0) {
		cout << " + " << i << "i)";
	}
	else {
		cout << " - " << -i << "i)";
	}
} // ������ �������� ����ϱ� ���� �Լ��� ����

Complex add(Complex a, Complex b) {

	Complex sum;

	sum.setR(a.getR() + b.getR());
	sum.setI(a.getI() + b.getI());

	return sum;
} // ���Ҽ��� ������ �����ϱ� ���� add �Լ��� ����