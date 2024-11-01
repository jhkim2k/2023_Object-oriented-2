#include "Employee.h"

class Manager : public Employee {
	int bonus;
public:
	Manager(string n, int s, int b) : Employee(n, s) {
		bonus = b;
	}
	int getBonus() { return bonus; }
	void setBouns(int b) { bonus = b; }
	void computeSalary() {
		cout << "전체 급여: " << this->getSalary() + bonus << endl;
	}
};