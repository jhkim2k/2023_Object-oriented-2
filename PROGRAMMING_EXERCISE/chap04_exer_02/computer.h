#include <iostream>
using namespace std;

class Computer {
private:
	string name;
	int ram;
	double cpu_speed; // Computer Ŭ������ ������� ����(�� �ڷ����� ���缭)
public:
	void setComputer(string, int, double);
	void print(); // ����Լ��� ���� ����.
};

void Computer::setComputer(string n, int r, double c) {
	name = n;
	ram = r;
	cpu_speed = c;
} // ������ �Լ��� ����.

void Computer::print() {
	cout << "�̸� : " << name << endl;
	cout << "RAM : " << ram << endl;
	cout << "CPU �ӵ� : " << cpu_speed << endl;
} // ����� ����ϴ� �Լ� ����