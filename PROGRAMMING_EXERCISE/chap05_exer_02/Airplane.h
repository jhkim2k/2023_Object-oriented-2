#include <iostream>
using namespace std;

class Airplane {
private:
	string name;
	int capacity;
	int speed; // Airplane Ŭ������ ��� ���� ����.
public:
	string getName() { return name; }
	int getCapacity() { return capacity; }
	int getSpeed() { return speed; } // �� ��� ���� ������ �Լ��� ���� ����
	void setName(string n) { name = n; }
	void setCapacity(int c) { capacity = c; }
	void setSpeed(int s) { speed = s; } // �� ��� ���� ������ �Լ� ����

	Airplane(int n = 0, int m = 0) : capacity(n), speed(m) {}
	Airplane(string n = "", int c = 0, int s = 0) : name(n), capacity(c), speed(s) {} // ������ �ߺ� ����
	void print(); // ��� ���� ��� �Լ��� ���� ����
};

void Airplane::print() {
	cout << "������� �̸�: " << name << endl;
	cout << "������� �뷮: " << capacity << endl;
} // ��� ���� ��� �Լ��� ����