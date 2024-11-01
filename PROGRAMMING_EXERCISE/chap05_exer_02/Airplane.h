#include <iostream>
using namespace std;

class Airplane {
private:
	string name;
	int capacity;
	int speed; // Airplane 클래스의 멤버 변수 선언.
public:
	string getName() { return name; }
	int getCapacity() { return capacity; }
	int getSpeed() { return speed; } // 각 멤버 변수 접근자 함수의 원형 선언
	void setName(string n) { name = n; }
	void setCapacity(int c) { capacity = c; }
	void setSpeed(int s) { speed = s; } // 각 멤버 변수 설정자 함수 선언

	Airplane(int n = 0, int m = 0) : capacity(n), speed(m) {}
	Airplane(string n = "", int c = 0, int s = 0) : name(n), capacity(c), speed(s) {} // 생성자 중복 선언
	void print(); // 멤버 변수 출력 함수의 원형 선언
};

void Airplane::print() {
	cout << "비행기의 이름: " << name << endl;
	cout << "비행기의 용량: " << capacity << endl;
} // 멤버 변수 출력 함수의 구현