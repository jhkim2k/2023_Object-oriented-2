#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	int age;
	int salary;
public:
	void setEmp(string, int, int);
	void print();
};

void Employee::setEmp(string n, int a, int s) {
	name = n;
	age = a;
	salary = s;
}

void Employee::print() {
	cout << name << endl;
	cout << age << endl;
	cout << salary << endl;
}