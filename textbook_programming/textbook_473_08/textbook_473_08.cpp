#include <iostream>
using namespace std;

class Human {
	string name;
	int age;
public:
	Human(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string getName() { return name; }
	int getAge() { return age; }
	void setName(string n) { name = n; }
	void setAge(int a) { age = a; }
	void print() {
		cout << "ÀÌ¸§: " << name << ", ³ªÀÌ: " << age << endl;
	}
};

class Student : public Human {
	string major;
public:
	Student(string name, int age, string major) : Human(name, age) {
		this->major = major;
	}
};

int main() {
	Human a("ÃáÇâ", 18), b("¸ù·æ", 21), c("»ç¶Ç", 50);

	a.print();
	b.print();
	c.print();

	return 0;
}