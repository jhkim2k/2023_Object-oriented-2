#include <iostream>
using namespace std;

class Triangle {
private:
	int b;
	int h;
	int a; // Triangle 클래스의 멤버 변수 선언
public:
	void setTri(int, int);
	int area(); // 설정자와 삼각형의 넓이를 구하는 함수의 원형 선언
};

void Triangle::setTri(int n, int m) {
	b = n;
	h = m;
} // 설정자 함수 구현

int Triangle::area() {
	a = b * h / 2;
	return a;
} // 삼각형의 넓이 구하는 함수 구현