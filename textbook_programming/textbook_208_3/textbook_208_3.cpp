#include <iostream>
using namespace std;

class Emploee {
private:
	string name;
	int age;
	int salary;
	int years;
public:
	void set(string n, int a, int s, int y) {
		name = n;
		age = a;
		salary = s;
		years = y;
	}

	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	int getSalary() {
		return salary;
	}
	int getYears() {
		return years;
	}
};

int main() {
	Emploee Hong;

	Hong.set("ȫ�浿", 26, 1000000, 1);
	cout << "�̸�: " << Hong.getName() << endl;
	cout << "����: " << Hong.getAge() << endl;
	cout << "�޿�: " << Hong.getSalary() << endl;
	cout << "����: " << Hong.getYears() << endl;
}