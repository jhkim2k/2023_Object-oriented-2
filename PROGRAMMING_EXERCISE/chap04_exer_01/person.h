#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age; // 클래스 멤버 변수 선언
public:
	void setPerson(string, int);
	void print(); // 함수들의 원형 선언
};

void Person::setPerson(string n, int a) {
	name = n;
	age = a; 
} // 설정자 함수의 구현

void Person::print() {
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
} // 출력을 담당하는 함수 구현