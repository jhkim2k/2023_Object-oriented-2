#include <iostream>
#include <string>
using namespace std;

class Student {
	string name;
public:
	Student(string name = "") : name(name) {}
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

class MyClass {
	string className;
	Student* p;
	int size;
public:
	void setName(string n) { className = n; }
	string getName() { return className; }
	void setStudent() { p = new Student[size]; }
	Student* getStudent() { return p; }
	void setSize(int s) { this->size = s; }
	int getSize() { return size; }
};