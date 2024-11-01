#include <iostream>
using namespace std;

class Complex {
	double r;
	double i; // Complex 클래스의 멤버 변수 선언
public:
	Complex() {
		r = 0;
		i = 0;
	}
	Complex(double _r, double _i): r(_r), i(_i) {} // 생성자 중복 정의

	void print(); // 출력 함수의 원형 선언

	void setR(double _r) { r = _r; }
	void setI(double _i) { i = _i; } // 설정자 선언
	double getR() { return r; }
	double getI() { return i; } // 접근자 선언
};

void Complex::print() {
	cout << "(" << r;
	if (i >= 0) {
		cout << " + " << i << "i)";
	}
	else {
		cout << " - " << -i << "i)";
	}
} // 정해진 포멧으로 출력하기 위한 함수의 구현

Complex add(Complex a, Complex b) {

	Complex sum;

	sum.setR(a.getR() + b.getR());
	sum.setI(a.getI() + b.getI());

	return sum;
} // 복소수의 덧셈을 구현하기 위한 add 함수의 구현