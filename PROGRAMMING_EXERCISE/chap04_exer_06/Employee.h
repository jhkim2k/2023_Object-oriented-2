#include <iostream>
using namespace std;

class Employee {
private:
	string name; // 문자열
	int age;
	int salary; // Employee의 멤버 변수 선언.
public:
	void setEmp(string, int, int);
	void print(); // 멤버 함수의 원형 선언
};

void Employee::setEmp(string n = NULL, int a = 0, int s = 0) {
	name = n;
	age = a;
	salary = s;
} // 설정자 함수의 구현

void Employee::print() {
	cout << name << endl;
	cout << age << endl;
	cout << salary << endl;
} // 출력함수의 구현