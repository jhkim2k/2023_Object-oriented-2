#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	void setPerson(string, int);
	void print();
};

void Person::setPerson(string n, int a) {
	name = n;
	age = a;
}

void Person::print() {
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
}