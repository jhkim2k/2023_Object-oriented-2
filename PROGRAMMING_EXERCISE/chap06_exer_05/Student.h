#include <iostream>
#include <string>
#include <vector> // ���� ����� ���� ����
#include <algorithm> // sort ����� ���� ����
using namespace std;

class Student {
	string name;
	double marks; // Student Ŭ���� ��� ���� ����
public:
	Student() : name(""), marks(0) {}
	Student(string n, double m) : name(n), marks(m) {} // ������ �ߺ� ����
	double getMarks() { return marks; } // ������ �Լ� ����
	void print(); // ��� �Լ��� ���� ����
};

void Student::print() {
	cout << "�̸�: " << name << endl;
	cout << "����: " << marks << endl;
} // �̸��� ������ ����ϴ� �Լ��� ����

bool compare(Student& a, Student& b) {
	return a.getMarks() > b.getMarks();
} // sort �˰��򿡼� ����ϱ� ���� ���Ѵ�.