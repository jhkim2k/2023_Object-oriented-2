#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int snumber;
	int age;
public:
	Person() {
		name = "";
		snumber = 0;
		age = 0;
	}
	Person(string n, int sum, int age) {
		name = n;
		snumber = sum;
		age = age;
	}
};