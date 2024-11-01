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

	Hong.set("홍길동", 26, 1000000, 1);
	cout << "이름: " << Hong.getName() << endl;
	cout << "나이: " << Hong.getAge() << endl;
	cout << "급여: " << Hong.getSalary() << endl;
	cout << "연차: " << Hong.getYears() << endl;
}