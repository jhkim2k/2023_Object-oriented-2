#include "Box.h"

Box Box::operator+(const Box& b2) {
	Box b;
	b.length = this->length + b2.length;
	b.width = this->width + b2.width;
	b.height = this->height + b2.height;
	return b;
}

int main() {
	Box a(10, 10, 10), b(20, 20, 20), c;

	c = a + b;

	cout << "���� #1\n";
	a.print();
	cout << "������ ����: " << a.getVolume() << endl;

	cout << "\n���� #2\n";
	b.print();
	cout << "������ ����: " << b.getVolume() << endl;

	cout << "\n���� #3\n";
	c.print();
	cout << "������ ����: " << c.getVolume() << endl;

	return 0;
}