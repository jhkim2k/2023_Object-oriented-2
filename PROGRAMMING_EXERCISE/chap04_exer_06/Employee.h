#include <iostream>
using namespace std;

class Employee {
private:
	string name; // ���ڿ�
	int age;
	int salary; // Employee�� ��� ���� ����.
public:
	void setEmp(string, int, int);
	void print(); // ��� �Լ��� ���� ����
};

void Employee::setEmp(string n = NULL, int a = 0, int s = 0) {
	name = n;
	age = a;
	salary = s;
} // ������ �Լ��� ����

void Employee::print() {
	cout << name << endl;
	cout << age << endl;
	cout << salary << endl;
} // ����Լ��� ����