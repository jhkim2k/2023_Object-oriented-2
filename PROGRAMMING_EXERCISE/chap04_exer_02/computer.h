#include <iostream>
using namespace std;

class Computer {
private:
	string name;
	int ram;
	double cpu_speed; // Computer 클래스의 멤버변수 선언(각 자료형에 맞춰서)
public:
	void setComputer(string, int, double);
	void print(); // 멤버함수의 원형 선언.
};

void Computer::setComputer(string n, int r, double c) {
	name = n;
	ram = r;
	cpu_speed = c;
} // 설정자 함수의 선언.

void Computer::print() {
	cout << "이름 : " << name << endl;
	cout << "RAM : " << ram << endl;
	cout << "CPU 속도 : " << cpu_speed << endl;
} // 출력을 담당하는 함수 선언