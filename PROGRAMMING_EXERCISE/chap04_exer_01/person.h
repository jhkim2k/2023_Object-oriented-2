#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age; // Ŭ���� ��� ���� ����
public:
	void setPerson(string, int);
	void print(); // �Լ����� ���� ����
};

void Person::setPerson(string n, int a) {
	name = n;
	age = a; 
} // ������ �Լ��� ����

void Person::print() {
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
} // ����� ����ϴ� �Լ� ����