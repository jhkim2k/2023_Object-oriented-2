#include <iostream>
using namespace std;

class Complex {
private:
	double r;
	double i; // Complex 함수의 멤버변수 선언
public:
	void setCom(double, double);
	void print();
}; // 멤버 변수의 원형 설정

void Complex::setCom(double N, double M) {
	r = N;
	i = M;
} // 설정자 구현

void Complex::print() {
	cout << r << " + " << i << "i" << endl;
} // 출력 함수의 구현