#include <iostream>
using namespace std;

class Employee {
	string name;
	int salary;
public:
	Employee(string n, int s) : name(n), salary(s) {}
	string getName() { return name; }
	int getSalary() { return salary; }
	void setName(string n) { name = n; }
	void setSalary(int s) { salary = s; }
	void computeSalary() {
		cout << "±Þ¿©: " << this->getSalary() << endl;
	}
};