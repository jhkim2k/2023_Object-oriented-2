#include <iostream>
#include <cstring>
using namespace std;

class MyClass {
public:
	char getStored();
	MyClass(const char* str );
	MyClass(const MyClass& other);
	~MyClass();
private:
	char* stored;
};

char MyClass::getStored()
{
	return *stored;
}

MyClass::MyClass(const char* str)
{
	stored = new char[strlen(str) + 1];
	strcpy(stored, str);
}

MyClass::MyClass(const MyClass& other)
{
	stored = new char[strlen(other.stored) + 1];
	strcpy(stored, (other.stored));
}

MyClass::~MyClass()
{
	delete[] stored;
}

int main()
{
	MyClass cls1("A");
	MyClass cls2 = cls1;

	cout << cls1.getStored() << endl;
	cout << cls2.getStored() << endl;

	return 0;
}
