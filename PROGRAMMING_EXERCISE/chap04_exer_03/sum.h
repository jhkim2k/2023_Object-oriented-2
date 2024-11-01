#include <iostream>
using namespace std;

class Sum {
	int n1, n2; // Sum 클래스의 멤버변수 선언.
public:
	void init(int, int);
	int add(); // 멤버함수의 원형 선언
};

void Sum::init(int x, int y) {
	n1 = x;
	n2 = y;
} // 초기화 함수의 구현

int Sum::add() {
	return n1 + n2;
} // 연산을 위한 멤버함수의 구현