#include "box.h"

bool Box::operator==(const Box& b2) {
	return (length == b2.length && width == b2.width && height == b2.height);
}

int main() {
	Box a(10, 10, 10), b(20, 20, 20);

	cout << "���� #1\n";
	a.print();
	cout << "������ ����: " << a.getVolume() << endl;

	cout << "\n���� #2\n";
	b.print();
	cout << "������ ����: " << b.getVolume() << endl;

	cout.setf(cout.boolalpha);
	cout << "\n" << (a == b) << endl;

	return 0;
}